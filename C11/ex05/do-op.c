/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:41:03 by skarim            #+#    #+#             */
/*   Updated: 2023/09/07 09:44:23 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"
#include <unistd.h>

int	operator(int a, char *c, int b)
{
	int	result;
	int	(*operator[5])(int, int);

	operator[0] = &ft_add;
	operator[1] = &ft_sub;
	operator[2] = &ft_mul;
	operator[3] = &ft_div;
	operator[4] = &ft_mod;
	result = 1;
	if (c[0] == '+')
		result = operator[0](a, b);
	else if (c[0] == '-')
		result = operator[1](a, b);
	else if (c[0] == '*')
		result = operator[2](a, b);
	else if (c[0] == '/')
		result = operator[3](a, b);
	else if (c[0] == '%')
		result = operator[4](a, b);
	return (result);
}

void	ft_do_op(char *nbr1, char *op, char *nbr2)
{
	int	a;
	int	b;
	int	result;

	result = 1;
	a = ft_atoi(nbr1);
	b = ft_atoi(nbr2);
	if (!(op[0] == '+' || op[0] == '-'
			|| op[0] == '/' || op[0] == '%' || op[0] == '*'))
		write (1, "0", 1);
	else if (op[0] == '/' && b == 0)
		write (1, "Stop : division by zero", 23);
	else if (op[0] == '%' && b == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		result *= (operator(a, op, b));
		ft_putnbr(result);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op(argv[1], argv[2], argv[3]);
	return (0);
}
