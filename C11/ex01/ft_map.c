/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:24:06 by skarim            #+#    #+#             */
/*   Updated: 2023/09/05 23:21:31 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
int	ft_inc(int n)
{
	return (n + 1);
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*t;

	t = (int *)malloc(sizeof(int) * length);
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}
/*
#include <stdio.h>

int main(void)
{
	int	t[]={1,2,3,4};
	int	*b = ft_map(t, 4, &ft_inc);
	int	i;

	i = 0;
	while (i < 4)
	{
		printf("%d", b[i]);
		i++;
	}
	return (0);
}*/
