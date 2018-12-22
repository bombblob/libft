/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numpair.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:36:27 by acarlson          #+#    #+#             */
/*   Updated: 2018/12/07 19:48:11 by acarlson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint64_t	ft_numpair(uint32_t x, uint32_t y)
{
	int64_t		p;
	int			i;

	p = 0;
	i = 0;
	while (x || y)
	{
		p |= ((uint64_t)(x & 1) << i);
		x >>= 1;
		p |= ((uint64_t)(y & 1) << (i + 1));
		y >>= 1;
		i += 2;
	}
	return (p);
}