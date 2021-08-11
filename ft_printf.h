/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranca- <lfranca-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 03:33:57 by lfranca-          #+#    #+#             */
/*   Updated: 2021/08/11 15:58:34 by lfranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int		ft_integ_unsigned(va_list p, int *printed, int *index);

int		ft_integ_conversion(va_list p, int *printed, int *index);

void	ft_char_conversion(va_list p, int *printed, int *index);

void	ft_str_conversion(va_list p, int *printed, int *index);

int		ft_hexa_conversion(va_list p, char to_conv, int *printed, int *index);

#endif