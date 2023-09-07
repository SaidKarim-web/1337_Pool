/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:32 by skarim            #+#    #+#             */
/*   Updated: 2023/09/07 12:34:38 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;

	i = 0;
	sort = 1;
	while (i < length - 1 && sort)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			sort = 0;
		i++;
	}
	if (sort != 1)
	{
		sort = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
/*
int compare(int a, int b)
{
    return (a - b);
}

int main()
{
    int tab[] = {5, 4, 3, 2, 1};
    int length = 5;

    if (ft_is_sort(tab, length, compare))
        printf("Le tableau est trié.\n");
    else
        printf("Le tableau n'est pas trié.\n");

    return 0;
}
*/
