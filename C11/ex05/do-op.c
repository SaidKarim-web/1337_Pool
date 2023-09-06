/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:43:15 by skarim            #+#    #+#             */
/*   Updated: 2023/09/06 22:55:23 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_mul(int a, int b);
int	ft_div(int a, int b);
int	ft_add(int a, int b);
int	ft_sub(int a, int b);
int	ft_mod(int a, int b);
int	ft_atoi(char *str);
int	ft_putnbr(int n);

int	ft_trait(char c, int a, int b)
{
	int	res;
	int	(*ptr[5])(int, int);

	res = 1;
	ptr[0] = &ft_mul;
	ptr[1] = &ft_div;
	ptr[2] = &ft_add;
	ptr[3] = &ft_sub;
	ptr[4] = &ft_mod;
	if (c == '*')
		res *= ptr[0](a, b);
	else if (c == '/')
		res *= ptr[1](a, b);
	else if (c == '+')
		res *= ptr[2](a, b);
	else if (c == '-')
		res *= ptr[3](a, b);
	else if (c == '%')
		res *= ptr[4](a, b);
	return (res);
}

int	main(int ac, char **av)
{
	int		x;
	int		y;
	int		res;
	char	c;

	res = 1;
	if (ac == 4)
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[3]);
		c = av[2][0];
		if (c != '-' && c != '+' && c != '*' && c != '/' && c != '%')
			write(1, "0", 1);
		else if (c == '/' && y == 0)
			write (1, "Stop : division by zero", 23);
		else if (c == '%' && y == 0)
			write (1, "Stop : modulo by zero", 21);
		else 
		{
			res *= ft_trait(c, x, y);
			ft_putnbr(res);
		}
	}
	return (0);
}
