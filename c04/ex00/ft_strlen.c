/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:46:18 by skarim            #+#    #+#             */
/*   Updated: 2023/08/23 12:58:14 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}
/*
int	main(void)
{
	char *s = "Cowards die many times before their deaths!";

	printf("the size of %s: %d", s, ft_strlen(s));
	return (0);
}*/
