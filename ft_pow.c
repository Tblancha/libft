/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 02:31:39 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/14 03:25:20 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, size_t exp)
{
	size_t		i;
	int			result;

	i = 1;
	result = nb;
	if (exp == 0)
		return (1);
	while (i++ < exp)
		result = result * nb;
	return (result);
}
