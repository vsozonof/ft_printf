/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:29:37 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/29 15:00:22 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (!(s))
		return ;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}
