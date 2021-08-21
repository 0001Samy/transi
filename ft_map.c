/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:02:57 by hefernan          #+#    #+#             */
/*   Updated: 2020/07/21 15:02:12 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *frigo;

	i = 0;
	frigo = malloc(sizeof(int) * length);
	while (i < length)
	{
		frigo[i] = f(tab[i]);
		i++;
	}
	return (frigo);
}
