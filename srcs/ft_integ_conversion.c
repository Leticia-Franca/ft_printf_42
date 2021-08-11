/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integ_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranca- <lfranca-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:08:17 by lfranca-          #+#    #+#             */
/*   Updated: 2021/08/11 02:26:57 by lfranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_untoa(unsigned int n)
{
	char				*num_str;
	size_t				dgt;
	unsigned long int	numb;

	numb = n;
	dgt = ft_count_unsign(n);
	num_str = (char *)malloc(sizeof(char) * (dgt + 1));
	if (!num_str)
		return (NULL);
	num_str[dgt] = '\0';
	while (dgt--)
	{
		num_str[dgt] = numb % 10 + '0';
		numb /= 10;
	}
	return (num_str);
}

int	ft_integ_unsigned(va_list p, int *printed, int *index)
{
	int				ret;
	unsigned int	number;
	char			*num;

	ret = 0;
	number = va_arg(p, unsigned int);
	num = ft_untoa(number);
	if (num == NULL)
		return (-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	(*index)++;
	return (ret);
}

int	ft_integ_conversion(va_list p, int *printed, int *index)
{
	int			number;
	int			ret;
	char		*num;

	ret = 0;
	number = va_arg(p, int);
	num = ft_itoa(number);
	if (num == NULL)
		return (-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	(*index)++;
	return (ret);
}
