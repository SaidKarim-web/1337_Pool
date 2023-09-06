/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:29:47 by skarim            #+#    #+#             */
/*   Updated: 2023/09/06 22:48:48 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	c;

	c = 0;
	res = 0;
	sign = 1;
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
		res = res * 10 + *str - '0';
		str++;
		c = 1;
	}
	if (c)
		return (sign * res);
	return (0);
}
