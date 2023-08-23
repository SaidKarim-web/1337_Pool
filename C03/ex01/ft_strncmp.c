/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:16:20 by skarim            #+#    #+#             */
/*   Updated: 2023/08/23 09:56:44 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (*s1 && n != 0)
		return (*s1);
	if (*s2 && n != 0)
		return (-*s2);
	return (0);
}
/*
int	main(void)
{
	printf("strncmp(saidd, saidlslie, 6): %d", ft_strncmp("saidd", "saidlslie", 6));
	return (0);
}*/
