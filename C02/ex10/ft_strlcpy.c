/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:34:26 by skarim            #+#    #+#             */
/*   Updated: 2023/08/21 20:46:22 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void ft_putnbr(unsigned int  nbr)
{
	char	c;

	c = nbr + '0';
	if (nbr < 10)
		write(1, &c, 1);
	else
	{
		ft_putnbr(nbr / 10);
		c = nbr % 10 + '0';
		write(1, &c, 1);
	}
}*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	i = 0;
	size_src = 0;
	while (src[size_src])
		size_src++;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size_src);
}
/*
int	main(void)
{
	char source [] = "hello, world";
	char destination[20];
	unsigned int clength;

	clength = ft_strlcpy(destination, source, 20);
	write(1, "source:", 7);
	write(1, source, 12);
	write(1, "  destination: ", 15);
	write(1, destination, 20);
	write(1, "    length:", 7);
	ft_putnbr(clength);
	return (0);
}*/
