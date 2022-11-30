/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:51:24 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/30 19:50:08 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_hexa_print(unsigned long int nb, char *base, int baselen, int index)
{
	char		tab[32];

	if (nb == 0)
	{
		ft_putchar(base[nb % baselen]);
		return ;
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
		ft_putchar(tab[index]);
		index--;
	}
}

void	ft_putnbr_hexa(unsigned long int nb, char *base)
{
	int			base_len;
	int			index;

	base_len = ft_strlen(base);
	index = 0;
	ft_putnbr_hexa_print(nb, base, base_len, index);
}

void	ft_base_checker(unsigned long int nb, char c)
{
	char	*base_maj;
	char	*base_min;

	base_maj = "0123456789ABCDEF";
	base_min = "0123456789abcdef";
	if (c == 'x')
		ft_putnbr_hexa(nb, base_min);
	else
		ft_putnbr_hexa(nb, base_maj);
}
