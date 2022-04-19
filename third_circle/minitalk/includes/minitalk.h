/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:48:20 by sdi-lega          #+#    #+#             */
/*   Updated: 2022/04/08 13:05:08 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define IDLE 50
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>

int		ft_printf(const char *string, ...);
int		ft_atoi(const char *str);
int		ft_strlen(const char *string);

#endif