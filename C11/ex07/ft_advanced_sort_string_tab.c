/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:51:44 by skarim            #+#    #+#             */
/*   Updated: 2023/09/06 17:16:14 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && cmp(tab[j], tab[j + 1]) > 0)
			{
				s = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = s;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	av++;
	ft_advanced_sort_string_tab(av, &ft_strcmp);
	while (*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}*/
