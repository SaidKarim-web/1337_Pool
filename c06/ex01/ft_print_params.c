/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:52:28 by skarim            #+#    #+#             */
/*   Updated: 2023/08/24 23:29:07 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	size;

	i = 1;
	while (i < argc)
	{
		size = 0;
		while (argv[i][size])
			size++;
		write(1, argv[i], size);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
