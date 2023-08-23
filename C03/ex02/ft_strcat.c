/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:27:23 by skarim            #+#    #+#             */
/*   Updated: 2023/08/22 17:55:12 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[15] = "said ";
	char	*s2 = "karim";
	char	*s;
	
	write(1, "before: s1=", 11);
	write(1, s1, 15);
	write(1, "\nafter: s1=", 11);
	s = ft_strcat(s1, s2);
	write(1, s1, 15);
	write(1, "\n the return: ", 14);
	write(1, s, 15);
	return (0);
}*/
