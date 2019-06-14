/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintbit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 03:48:06 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/14 04:06:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		mainprintbit(int ac, char **av)
{
	int bin;
	int newtab;
	int tab;

	ac += 0;
	if (ac != 3)
	{
		printf("besoin de deux arguments: deux valeurs int");
		return (0);
	}
	bin = ft_atoi(av[1]);
	tab = ft_atoi(av[2]);
	printf("1er arg\n");
	ft_printbit(bin);
	printf("2eme arg\n");
	ft_printbit(tab);
	newtab = bin & tab;
	printf("& and exclusif\n");
	ft_printbit(newtab);
	newtab = bin | tab;
	printf("| ou exclusif\n");
	ft_printbit(newtab);
	newtab = bin ^ tab;
	printf("^ xor\n");
	ft_printbit(newtab);
	newtab = ~bin;
	printf("~ tild\n");
	ft_printbit(newtab);
	return (0);
}
