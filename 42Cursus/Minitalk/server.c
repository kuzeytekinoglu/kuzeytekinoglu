/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:23:02 by gdogan            #+#    #+#             */
/*   Updated: 2022/02/16 22:20:13 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	yaz(int signum, siginfo_t *siginfo, void *unused)
{
	static int	i = 7;
	static int	character = 0;
	int			c;

	(void)unused;
	if (signum == SIGUSR1)
		c = 1;
	else
		c = 0;
	character += c << i;
	if (i == 0)
	{
		i = 7;
		write(1, &character, 1);
		character = 0;
		if (kill(siginfo->si_pid, SIGUSR2) == -1)
			error("Error signal\n");
	}
	else
		i--;
}

int	main(void)
{
	struct sigaction	catch;

	write(1, "server pid = : ", 13);
	inttoasci(getpid());
	write(1, "\n", 1);
	catch.sa_flags = SA_SIGINFO;
	catch.sa_sigaction = yaz;
	if ((sigaction(SIGUSR1, &catch, 0)) == -1)
		error("Error sigaction\n");
	if ((sigaction(SIGUSR2, &catch, 0)) == -1)
		error("Error sigaction\n");
	while (1)
		pause();
}
