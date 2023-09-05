/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:32:41 by skarim            #+#    #+#             */
/*   Updated: 2023/09/05 09:20:58 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_isvalide(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = 0;
	if (*str == '-')
	{
		ft_putchar('-');
		i = 1;
	}
	while (--size >= i)
		ft_putchar(str[size]);
}

void	ft_putnbr_base(int n, char *base)
{
	char	res[100];
	int		i;
	int		size;
	long	nbr;

	if (!ft_isvalide(base))
		return ;
	size = ft_strlen(base);
	i = 0;
	nbr = n;
	if (nbr == 0)
		res[i++] = base[0];
	if (nbr < 0)
	{
		res[0] = '-';
		i++;
		nbr *= -1;
	}
	while (nbr)
	{
		res[i++] = base[nbr % size];
		nbr /= size;
	}
	res[i] = '\0';
	ft_putstr(res);
}
/*
int	main(void)
{
	ft_putnbr_base(-35, "0123456789abcdef");
	return (0);
}*/
