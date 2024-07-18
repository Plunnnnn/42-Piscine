/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:45:42 by bdenfir           #+#    #+#             */
/*   Updated: 2024/06/26 17:39:38 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_deco(int nb)
{
	char	b;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (0 == nb)
	{
		return ;
	}
	ft_deco(nb / 10);
	b = (nb % 10) + '0';
	write(1, &b, 1);
}

void	ft_putnbr(int nb)
{
	if (-2147483648 == nb)
	{
		write(1, "-214783648", 11);
	}
	else if (0 == nb)
	{
		write(1, "0", 1);
	}
	else
	{
		write(1, ", ", 2);
		ft_deco(nb);
	}
}

void	ft_print_combn(int n)
{	
	int	max;
	int	dec;
	int	pow;

	max = 0;
	pow = 1;
	dec = n;
	while (dec > 0)
	{
		pow = pow * 10;
		dec--;
	}		
	if (n <= 0 || n >= 9)
	{
		return ;
	}
	while (max <= pow - 1)
	{
		ft_putnbr(max);
		max++;
	}	
}
