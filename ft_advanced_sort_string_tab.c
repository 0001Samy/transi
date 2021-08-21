/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:07:40 by hefernan          #+#    #+#             */
/*   Updated: 2020/07/21 15:16:30 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		sort;
	char	*stock;

	i = 0;
	sort = 0;
	stock = 0;
	while (sort == 0)
	{
		i = 0;
		sort = 1;
		while (tab[i + 1] != 0)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				stock = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = stock;
				sort = 0;
			}
			i++;
		}
	}
}
