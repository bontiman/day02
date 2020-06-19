/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:27:55 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/19 11:45:01 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	while (n >= -2147483648 && n <= 2147483647)
	{
		if (n < 0)
			ft_putchar('N');
		else if (n == 0 || n == '\0' || n > 0)
			ft_putchar('P');
		break;
	}
}
