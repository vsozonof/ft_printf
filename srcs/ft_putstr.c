/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:29:37 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/30 14:19:52 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	i = -1;
	if (s == NULL)
		return (ft_putstr("(null)"));
	while (s[++i])
		ft_putchar(s[i]);
}
