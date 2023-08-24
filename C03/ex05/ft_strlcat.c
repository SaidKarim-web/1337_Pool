/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 06:12:10 by skarim            #+#    #+#             */
/*   Updated: 2023/08/23 11:58:03 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putunsignednbr(unsigned nbr)
{
	char	c;
	c = nbr + '0';
	if (nbr < 10)
		write(1, &c, 1);
	else
	{
		c = nbr % 10 + '0';
		ft_putunsignednbr(nbr / 10);
		write(1, &c, 1);
	}
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (j + size);
	k = i;
	while (*src && k < size - 1)
	{
		dest[k] = *src;
		k++;
		src++;
	}
	dest[k] = '\0';
	return (j + i);
}
/*
int	main(void)
{
	char	s[20] = "said";
	char	*k = " karim, pooler";

	write(1, s, 10);
	ft_putunsingednbr(ft_strlcat(s, k, 11));
	write(1, "\t", 1);
	write(1, s, 10);
	return (0);
}*/
