/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:42:28 by skarim            #+#    #+#             */
/*   Updated: 2023/09/02 16:47:33 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s);
int		ft_isvalide(char c, char *base);
int		ft_getindice(char c, char *base);
int		ft_basevalide(char *base);

int	ft_whitespaces(char c)
{
	return (c == ' ' || c == '\n'
		|| c == '\t' || c == '\r'
		|| c == '\f' || c == '\v');
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	while (ft_whitespaces(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_isvalide(*str, base))
	{
		res = res * ft_strlen(base) + ft_getindice(*str, base);
		str++;
	}
	return (res * sign);
}

int	ft_numbersize(int n, int div)
{
	int	i;

	i = 1;
	while (n / div != 0)
	{
		i++;
		n /= div;
	}
	return (i);
}

char	*ft_itoi_base(int nbr, char *base)
{
	int		size;
	long	n;
	char	*res;
	int		i;

	i = 0;
	n = nbr;
	size = ft_numbersize(n, ft_strlen(base));
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
		size++;
		i++;
	}
	res[size] = '\0';
	while (size > i)
	{
		res[--size] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (! (ft_basevalide(base_from) && ft_basevalide(base_to)))
		return (NULL);
	return (ft_itoi_base(ft_atoi_base(nbr, base_from), base_to));
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}*/
