/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:59:26 by skarim            #+#    #+#             */
/*   Updated: 2023/08/23 13:08:29 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
/*
int main(void)
{
	char *s = "work smart and hard!";
	ft_putstr(s);
	return (0);
}*/
