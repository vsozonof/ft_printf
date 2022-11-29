/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:02:07 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/29 15:00:10 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_pointer_converter(void *p)
{
	uintptr_t	ptr;

	ptr = (uintptr_t)p;
	ft_base_checker(ptr, 'x');
}
