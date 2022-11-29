/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:07:27 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/29 15:31:28 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_format_checker(const char *str, int i, va_list args)
{
	if (str[i + 1] == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (str[i + 1] == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (str[i + 1] == 'u')
		ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (str[i + 1] == 'x' || str[i + 1] == 'X')
		ft_base_checker(va_arg(args, int), str[i + 1]);
	else if (str[i + 1] == 'p')
		ft_pointer_converter(va_arg(args, void *));
	else if (str[i + 1] == '%')
		ft_putchar_fd('%', 1);
	else
	{
		ft_putchar_fd(str[i], 1);
		ft_putchar_fd(str[i + 1], 1);
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_format_checker(str, i, args);
			i += 1;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
