/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:10:25 by skarim            #+#    #+#             */
/*   Updated: 2023/09/02 14:57:08 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checklast(char *tab, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (tab[i] != '9' - (n - 1 - i))
			return (0);
		i--;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	char	tab[9];
	int		i;

	i = -1;
	while (++i < n)
		tab[i] = '0' + i;
	while (1)
	{
		i = 0;
		while (i < n)
			write(1, &tab[i++], 1);
		if (ft_checklast(tab, n))
			return ;
		i = n - 1;
		while (i >= 0 && tab[i] == '9' - (n - 1 - i))
			i--;
		tab[i]++;
		i++;
		while (i < n)
		{
			tab[i] = tab[i - 1] + 1;
			i++;
		}
		write(1, ", ", 2);
	}
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}*/
