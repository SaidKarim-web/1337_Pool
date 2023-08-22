/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:58:39 by skarim            #+#    #+#             */
/*   Updated: 2023/08/21 20:39:07 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	first_letter;
	int	i;

	first_letter = 1;
	i = 0;
	while (str[i])
	{
		if (ft_alphanumeric(str[i]))
		{
			if (first_letter)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 'a' - 'A';
				first_letter = 0;
			}
			else
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 'a' - 'A';
		}
		else
			first_letter = 1;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	int i;

	i = 0;
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(s);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (0);
}*/
