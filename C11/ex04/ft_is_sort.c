/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:28:17 by skarim            #+#    #+#             */
/*   Updated: 2023/09/06 10:12:32 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_intcmp(int a, int b)
{
	return (a - b);
}
*/
int	ft_is_sort(int	*tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	sorted = 1;
	i = 0;
	while (i < length - 1 && sorted)
	{
		if (ft_intcmp(tab[i], tab[i + 1]) > 0)
			sorted = 0;
		i++;
	}
	if (!sorted)
	{
		sorted = 1;
		while (length > 0)
		{
			if (ft_intcmp(tab[length], tab[length - 1]) > 0)
				return (0);
			length--;
		}
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {9, 3, 1, -2};
	printf("%d", ft_is_sort(tab, 4, &ft_intcmp));
	return (0);
}*/
