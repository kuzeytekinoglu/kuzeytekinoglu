/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:14:01 by gdogan            #+#    #+#             */
/*   Updated: 2022/02/16 22:20:41 by gdogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	sig_islem(int signum, unsigned char *msg)
{
	int	i;
	int	c;

	i = 128;
	c = 0;
	while (msg[c] != '\0')
	{
		while (i >= 1)
		{
			if (msg[c] >= i)
			{
				kill(signum, SIGUSR1);
				msg[c] = msg[c] - i;
			}
			else
				kill(signum, SIGUSR2);
			usleep(100);
			i /= 2;
		}
		i = 128;
		c++;
	}
}

void	kontrol(int signum, siginfo_t *siginfo, void *unused)
{
	(void)unused;
	(void)siginfo;
	(void)signum;
	write(1, "Signal received\n", 17);
}

int	main(int argc, char **argv)
{
	struct sigaction	catch;

	catch.sa_flags = SA_SIGINFO;
	catch.sa_sigaction = kontrol;
	if ((sigaction(SIGUSR2, &catch, 0)) == -1)
		error("Sinyal Gönderme Hatası\n");
	if (argc == 3)
		sig_islem(ascitoint(argv[1]), (unsigned char *)argv[2]);
	else
		error("Gönderilemedi eksik parametre\n");
	while (1)
		pause();
}
