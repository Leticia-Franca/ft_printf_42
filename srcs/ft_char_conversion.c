/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranca- <lfranca-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:58:56 by lfranca-          #+#    #+#             */
/*   Updated: 2021/08/11 02:26:45 by lfranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_char_conversion(va_list p, int *printed, int *index)
{
	unsigned char	arg;

	arg = va_arg(p, int);
	ft_putchar_fd(arg, 1);
	(*index)++;
	(*printed)++;
}
