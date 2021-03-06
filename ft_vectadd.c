/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 13:29:01 by acarlson          #+#    #+#             */
/*   Updated: 2019/08/07 13:42:30 by acarlson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vect3	ft_vectadd(t_vect3 v, t_vect3 w)
{
	return (ft_vectnew(v.x + w.x, v.y + w.y, v.z + w.z));
}
