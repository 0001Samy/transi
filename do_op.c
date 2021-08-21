/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:53:32 by hefernan          #+#    #+#             */
/*   Updated: 2020/07/21 11:25:50 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_check_arg(char *str)
{
	if (str[0] == '-' || str[0] == '+' || str[0] == '*' || str[0] == '/'
			|| str[0] == '%')
		return (1);
	return (0);
}

void		operation(int nb1, int nb2, char signe)
{
	if (signe == '-')
		ft_putnbr(nb1 - nb2);
	else if (signe == '+')
		ft_putnbr(nb1 + nb2);
	else if (signe == '/')
	{
		if (nb2 == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(nb1 / nb2);
	}
	else if (signe == '*')
		ft_putnbr(nb1 * nb2);
	else if (signe == '%')
	{
		if (nb2 == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(nb1 % nb2);
	}
}

int			main(int ac, char **av)
{
	int		nb1;
	int		nb2;
	char	signe;

	if (ac != 4)
		return (0);
	if (ft_strlen(av[2]) != 1)
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (0);
	}
	if (!ft_check_arg(av[2]))
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (0);
	}
	signe = av[2][0];
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	operation(nb1, nb2, signe);
	ft_putstr("\n");
}
