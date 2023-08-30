/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:40:22 by skarim            #+#    #+#             */
/*   Updated: 2023/08/28 15:43:56 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s2)
	{
		s1[i] = *s2;
		s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	ft_totalsize(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * ft_strlen(sep) + 1;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*s;
	int		index;

	if (size == 0)
	{
		s = (char *)malloc(sizeof(char));
		return (s);
	}
	s = (char *)malloc(sizeof(char) * ft_totalsize(size, strs, sep));
	i = 0;
	index = 0;
	while (i < size)
	{
		ft_strcpy(s + index, strs[i]);
		index += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(s + index, sep);
			index += ft_strlen(sep);
		}
		i++;
	}
	s[index] = '\0';
	return (s);
}
/*
int	main(void)
{
	char *strs[] = {"I'm", "said", "karim", "1337", "pooler"};

	char *sep = ", ";
	printf("%s", ft_strjoin(5, strs, sep));
	return (0);
}*/
