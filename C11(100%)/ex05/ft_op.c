/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:07:57 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/17 17:07:57 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "op_struct.h"

void	add(int a, int b)
{
	ft_putnbr (a + b);
}

void	subtract(int a, int b)
{
	ft_putnbr (a - b);
}

void	multiply(int a, int b)
{
	ft_putnbr (a * b);
}

void	divide(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr (a / b);
}

void	modulo(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr (a % b);
}
