/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:57:20 by skarim            #+#    #+#             */
/*   Updated: 2023/08/24 20:18:28 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_valide(char *str)
{
	int	size;
	int	i;

	if (!str || !*str)
		return (0);
	size = 0;
	while (str[size])
	{
		i = size + 1;
		while (str[i])
		{
			if (str[i] == str[size])
				return (0);
			i++;
		}
		if (str[size] == '-' || str[size] == '+')
			return (0);
		size++;
	}
	if (size < 2)
		return (0);
	return (1);
}

void	ft_display(int nbr, char *base)
{
	int		size;
	long	j;

	size = 0;
	j = nbr;
	while (base[size])
		size++;
	if (nbr < 0)
	{
		ft_putchar('-');
		j *= -1;
	}
	if (j < size)
		ft_putchar(base[j]);
	else
	{
		ft_display(j / size, base);
		ft_display(j % size, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_str_valide(base))
		return ;
	ft_display(nbr, base);
}
/*
int	main(void)
{
	printf("123 in base 2: ");
	ft_putnbr_base(123, "01");
	printf("\n12 in base 16: ");
	ft_putnbr_base(12, "0123456789abcdef");
	return (0);
}*/
