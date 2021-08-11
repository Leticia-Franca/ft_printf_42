/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unsign.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranca- <lfranca-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:20:17 by lfranca-          #+#    #+#             */
/*   Updated: 2021/08/10 01:40:17 by lfranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_unsign(unsigned long int number)
{
	int	is_digit;

	is_digit = 0;
	if (number == 0)
		is_digit++;
	while (number != 0)
	{
		number /= 10;
		is_digit++;
	}
	return (is_digit);
}
