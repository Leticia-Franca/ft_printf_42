/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranca- <lfranca-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 01:24:21 by lfranca-          #+#    #+#             */
/*   Updated: 2021/08/11 02:27:02 by lfranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_str_conversion(va_list p, int *printed, int *index)
{
	char	*str;

	str = va_arg(p, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*printed += 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		*printed += ft_strlen(str);
	}
	(*index)++;
}
