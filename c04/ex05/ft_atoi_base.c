/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:51:14 by skarim            #+#    #+#             */
/*   Updated: 2023/09/05 16:09:36 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char c)
{
	return (c == ' ' || c == '\t'
		|| c == '\n' || c == '\n'
		|| c == '\f' || c == '\v');
}

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
			i++;
		}
		if (s[size] == '-' || s[size] == '+' || ft_space(s[size]))
			return (0);
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
		else
			return (res);
		str++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;

	if (!ft_valide_base(base))
		return (0);
	sign = 1;
	while (ft_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	return (sign * ft_decimal(str, base));
	return (0);
}
/*

int	main(int ac, char **av)
{
	printf("%d", ft_atoi_base(av[1], av[2]));
	return (0);
}*/
