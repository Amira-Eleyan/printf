/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:13:41 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/02/03 17:44:08 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_number(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		ft_isstrg("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_character('-');
		i++;
		n = -n;
	}
	if (n > 9)
		i += ft_number(n / 10);
	ft_character(n % 10 + '0');
	return (i + 1);
}