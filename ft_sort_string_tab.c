/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:52:04 by hefernan          #+#    #+#             */
/*   Updated: 2020/07/20 17:07:46 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void		ft_sort_string_tab(char **tab)
{
	int		i;
	int		sort;
	char	*stock;

	i = 0;
	stock = 0;
	sort = 0;
	while (sort == 0)
	{
		i = 0;
		sort = 1;
		while (tab[i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
