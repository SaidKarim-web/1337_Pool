/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:42:49 by skarim            #+#    #+#             */
/*   Updated: 2023/08/24 22:51:15 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	size;

	size = 0;
	if (argc == 1)
	{
		while (argv[0][size])
			size++;
		write(1, argv[0], size);
	}
	return (0);
}
