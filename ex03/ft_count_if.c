/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:50:07 by skarim            #+#    #+#             */
/*   Updated: 2023/09/07 09:13:02 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_search(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == 'A')
			return (1);
		i++;
	}
	return (0);
}*/
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*tab[] = {"sesg", "slelA", "esAel"};

	printf("%d", ft_count_if(tab, 3, &ft_search));
	return (0);
}*/
