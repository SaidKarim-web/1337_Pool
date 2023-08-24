/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:48:43 by skarim            #+#    #+#             */
/*   Updated: 2023/08/24 19:34:35 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t'
		|| c == '\n' || c == '\r'
		|| c == '\f' || c == '\v');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	r;
	int	check;

	check = 0;
	sign = 1;
	r = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + (*str - '0');
		str++;
		check = 1;
	}
	if (check)
		return (sign * r);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc > 1)
		printf("n: %d", ft_atoi(argv[1]));
	return (0);
}*/
