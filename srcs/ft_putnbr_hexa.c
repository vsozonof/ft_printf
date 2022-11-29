/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:51:24 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/29 15:00:20 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_putnbr_hexa_print(long int nb, char *base, int baselen, int index)
{
	char		tab[32];

	if (nb == 0)
	{
		ft_putchar_fd(base[nb % baselen], 1);
		return ;
	}
	else if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', 1);
	}
	while (nb > 0)
	{
		tab[index] = base[nb % baselen];
		nb /= baselen;
		index++;
	}
	index--;
	while (index >= 0)
	{
		ft_putchar_fd(tab[index], 1);
		index--;
	}
}

void	ft_putnbr_hexa(int nbr, char *base)
{
	int			len;
	long int	nb;
	int			index;

	nb = nbr;
	len = ft_strlen(base);
	index = 0;
	ft_putnbr_hexa_print(nb, base, len, index);
}

void	ft_base_checker(int nbr, char c)
{
	char	*base_maj;
	char	*base_min;

	base_maj = "0123456789ABCDEF";
	base_min = "0123456789abcdef";
	if (c == 'x')
		ft_putnbr_hexa(nbr, base_min);
	else
		ft_putnbr_hexa(nbr, base_maj);
}
