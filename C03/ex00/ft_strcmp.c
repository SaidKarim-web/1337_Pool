/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:28:47 by skarim            #+#    #+#             */
/*   Updated: 2023/08/22 17:10:43 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;
	
	if (nbr >= 0 && nbr <= 9)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else if (nbr >= 10)
	{
		c = nbr % 10 + '0';
		ft_putnbr(nbr / 10);
		write(1, &c, 1);
	}
	else
	{
		nbr = -nbr;
		write(1, "-", 1);
		ft_putnbr(nbr);
	}
}
*/
int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1)
		return (*s1);
	else if (*s2)
		return (-*s2);
	else
		return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	c;

	s1 = "saiad";
	s2 = "saiadz";
	ft_putnbr(ft_strcmp(s1, s2));
	return (0);
}*/
