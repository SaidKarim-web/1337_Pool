/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:13:48 by skarim            #+#    #+#             */
/*   Updated: 2023/08/22 18:30:52 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*res;

	res = dest;
	while (*dest)
		dest++;
	while (nb > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (res);
}
/*
int main(void)
{
	char	s1[20] = "said";
	char	*s2 = " karim, I'm 1337 student";
	char	*s;

	s = ft_strncat(s1, s2, 6);
	write(1, "after: destination = ", 22);
	ft_strncat(s1, s2, 6);
	write(1, s1, 11);
	write(1, "\nthe return = ", 14);
	write(1, s, 11);
	return (0);
}*/
