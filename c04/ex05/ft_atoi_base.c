/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:51:14 by skarim            #+#    #+#             */
/*   Updated: 2023/08/24 17:22:09 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		i = 1;
		str++;
	}
	if (!i)
		return (0);
	return (res * sign);
}
/* 
int	main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d", ft_atoi(argv[1]));
	return (0);
}
*/

int	ft_valide_base(char *s)
{
	int	size;
	int	i;

	size = 0;
	while (s[size])
	{
		i = size + 1;
		while (s[i])
		{
			if (s[i] == s[size])
				return (0);
			if (s[size] == '-' || s[size] == '+' 
				|| s[size] == '\t' || s[size] == '\n' 
				|| s[size] == '\r' || s[size] == ' ' 
				|| s[size] == '\v' || s[size] == '\f')
				return (0);
			i++;
		}
		size++;
	}
	if (size <= 1)
		return (0);
	return (1);
}

int	ft_decimal(char *str, char *base)
{
	int	size;
	int	res;
	int	i;

	res = 0;
	size = 0;
	while (base[size])
		size++;
	while (*str)
	{
		i = 0;
		while (base[i] && *str != base[i])
			i++;
		if (base[i])
			res = res * size + i;
		str++;
	}
	return (res);
}

int	ft_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' 
		|| c == '\r' || c == '\v' || c == '\f');
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;

	sign = 1;
	while (ft_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (ft_valide_base(base))
		return (sign * ft_decimal(str, base));
	return (0);
}

/*int main(void)
{
	int i;
	char *base = "0123456789abcdef";
  char *test_cases[10] = {"123", "1010", "7B", "456", "XYZ", "  -42", 
  "+123", "  9", "A A"};
	i = 0;
	while (test_cases[i])
	{
		printf("example: %d ==> %s > %d\n", i, test_cases[i],
	   	ft_atoi_base(test_cases[i], base));
		i++;
	}
	return (0);
}*/
