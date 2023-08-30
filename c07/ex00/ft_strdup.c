/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:02:11 by skarim            #+#    #+#             */
/*   Updated: 2023/08/26 21:03:13 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (p == 0)
		return (0);
	while (i < size)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
