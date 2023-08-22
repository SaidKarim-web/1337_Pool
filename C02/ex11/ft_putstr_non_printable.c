/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:13:49 by skarim            #+#    #+#             */
/*   Updated: 2023/08/22 15:15:03 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(int nbr)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar(hexa[nbr]);
	else
	{
		ft_puthexa(nbr / 16);
		ft_putchar(nbr % 16 + '0');
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = '\\';
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			if (str[i] < 16)
			{
				ft_putchar(c);
				ft_putchar('0');
				ft_puthexa(str[i]);
			}
			else
			{
				ft_putchar(c);
				ft_puthexa(str[i]);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
