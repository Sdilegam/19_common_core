/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:56:43 by sdi-lega          #+#    #+#             */
/*   Updated: 2022/04/08 13:04:15 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static int	g_data[4] = {0, 0, 0, 0};

int	send_signal(int PID, int sig)
{
	usleep(IDLE);
	if (sig == 1)
	{
		if (kill(PID, SIGUSR1) == -1)
			exit(1);
	}
	else if (sig == 2)
	{
		if (kill(PID, SIGUSR2) == -1)
			exit(1);
	}
	else
	{
		ft_printf("This is not a valid signal.\n");
		exit(1);
	}
	g_data[sig + 1]++;
	return (0);
}

void	send_data(int PID, int data, char size)
{
	int	index;

	index = size;
	while (--index >= 0)
	{
		if ((data >> index) & 1)
			send_signal(PID, 1);
		else
			send_signal(PID, 2);
		pause();
	}
}

void	client_handler(int sig_id, siginfo_t *info, void *construct)
{
	(void) construct;
	(void) info;
	if (sig_id == SIGUSR1)
		g_data[0]++;
	else
		g_data[1]++;
}

int	main(int argc, char *argv[])
{
	struct sigaction	sig_a;
	int					pid_server;
	int					message_len;

	if (argc != 3)
	{
		ft_printf("Use './client \"Server's PID\" \"Message transmited\"'\n");
		exit (1);
	}
	sig_a.sa_sigaction = client_handler;
	pid_server = ft_atoi(argv[1]);
	message_len = ft_strlen(argv[2]);
	if (message_len <= 0)
		return (0);
	sigaction(SIGUSR1, &sig_a, NULL);
	sigaction(SIGUSR2, &sig_a, NULL);
	send_data(pid_server, message_len, 32);
	write(1, "Client succesfully connected to the server.\n", 45);
	while (*argv[2])
		send_data(pid_server, *argv[2]++, 8);
	write(1, "Message succesfully sent.\n", 27);
	ft_printf("Signal sent: (%d, %d).\n", g_data[2], g_data[3]);
	ft_printf("signal received, (%d, %d).\n", g_data[0], g_data[1]);
}
