/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:45:34 by skarim            #+#    #+#             */
/*   Updated: 2023/09/06 16:51:07 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
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
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
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
int main(int ac, char **av) {
    av++;
    ft_sort_string_tab(av);
    while (*av) {
        printf("%s\n", *av);
        av++;
    }
    return 0;
}*/
