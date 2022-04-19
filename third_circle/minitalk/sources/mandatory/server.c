/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:56:42 by sdi-lega          #+#    #+#             */
/*   Updated: 2022/04/08 13:02:35 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static char	*g_message = 0;

void	print_message(char *message, int len)
{
	write(1, "Message: ", 9);
	write(1, message, len);
	write(1, "\n\n", 2);
}

int	ft_free(char **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = 0;
	}
	return (1);
}

void	handle_message(int data, int *bit_index, int *pid, int sig_id)
{
	static int	len = 0;
	static int	index = 0;

	*bit_index = 8;
	if (!g_message)
	{
		len = data;
		g_message = malloc(len);
		if (!g_message)
			exit(1);
	}
	else
	{
		g_message[index++] = data;
		if (index == len)
		{
			print_message(g_message, len);
			ft_free(&g_message);
			index = 0;
			*bit_index = 32;
			if (kill(*pid, sig_id) == -1)
				exit(ft_free(&g_message));
			*pid = 0;
		}
	}
}

void	server_handler(int sig_id, siginfo_t *info, void *construct)
{
	static int	data = 0;
	static int	bit_index = 32;
	static int	pid = 0;

	if (info->si_pid != 0 && pid == 0)
		pid = info->si_pid;
	(void) construct;
	if (--bit_index >= 0)
	{
		data = data << 1;
		if (sig_id == SIGUSR1)
			data++;
	}
	if (bit_index == 0)
	{
		handle_message(data, &bit_index, &pid, sig_id);
		data = 0;
	}
	if (pid != 0)
	{
		usleep(IDLE);
		if (kill(pid, sig_id) == -1)
			exit(ft_free(&g_message));
	}
}

int	main(void)
{
	struct sigaction	sig_a;

	sig_a.sa_sigaction = server_handler;
	sig_a.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sig_a, NULL);
	sigaction(SIGUSR2, &sig_a, NULL);
	ft_printf("This server's PID is: %d.\n", getpid());
	while (1)
	{
		pause();
	}
	return (0);
}
