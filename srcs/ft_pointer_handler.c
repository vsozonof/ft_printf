/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:02:07 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/30 12:58:47 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_pointer_converter(void *p)
{
	uintptr_t	ptr;

	ptr = (uintptr_t)p;
	ft_putstr("0x");
	ft_putnbr_hexa(ptr, "0123456789abcdef");
}
