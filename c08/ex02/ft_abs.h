/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:07:18 by skarim            #+#    #+#             */
/*   Updated: 2023/08/29 19:09:25 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(arg)	\
	({	\
	 	int	abs_val = (arg);	\
		if (abs_val < 0)	\
			abs_val = -abs_val;	\
		abs_val;	\
	})

#endif
