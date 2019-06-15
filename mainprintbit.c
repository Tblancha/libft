/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintbit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 03:48:06 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/15 10:51:52 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int bin;
	int newtab;
	int tab;

	if (ac != 3)
	{
		printf("besoin de deux arguments: deux valeurs int");
		return (0);
	}
	bin = ft_atoi(av[1]);
	tab = ft_atoi(av[2]);

	printf("1er arg: %d\n", bin);
	ft_printbit(bin);

	printf("2eme arg: %d\n", tab);
	ft_printbit(tab);

	newtab = bin & tab;
	printf("& and exclusif: %d & %d = %d\n", bin, tab, newtab);
	ft_printbit(newtab);

	newtab = bin | tab;
	printf("| ou exclusif: %d | %d = %d\n", bin, tab, newtab);
	ft_printbit(newtab);

	newtab = bin ^ tab;
	printf("^ xor: %d ^ %d = %d\n", bin, tab, newtab);
	ft_printbit(newtab);

	newtab = ~bin;
	printf("~ tild: ~%d = %d\n", bin, newtab);
	ft_printbit(newtab);

	newtab = bin << 1;
	printf("<< decalage: %d << 1 = %d\n", bin, newtab);
	ft_printbit(newtab);

	newtab = bin << 4;
	printf("<< decalage: %d << 4 = %d\n", bin, newtab);
	ft_printbit(newtab);

	newtab = bin >> 1;
	printf(">> decalage: %d >> 1 = %d\n", bin, newtab);
	ft_printbit(newtab);

	newtab = bin >> 4;
	printf(">> decalage: %d >> 4 = %d\n", bin, newtab);
	ft_printbit(newtab);

	return (0);
}
