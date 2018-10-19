/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 18:01:38 by acarlson          #+#    #+#             */
/*   Updated: 2018/09/26 14:19:06 by acarlson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isprime(unsigned long n)
{
	unsigned int i;

	if (n <= 1)
		return (0);
	else if (n % 2 == 0 && n > 2)
		return (0);
	i = 3;
	while (i < n / 2)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}