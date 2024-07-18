/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:04:32 by bdenfir           #+#    #+#             */
/*   Updated: 2024/06/27 14:23:51 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);

void	comm( char a, char b, char c, char d)
{
	if (a == '9' && b == '9' && c == '9' && d == '9')
	{
		return ;
	}
	else
	{
		write(1, ",", 1);
	}
}

void	bouc( char b, char c)
{
	char	x;
	char	y;

	x = b;
	y = c + 1;
	while (x <= '9')
	{
		while (y <= '9')
		{
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, " ", 1);
			write(1, &x, 1);
			write(1, &y, 1);
			comm(x, y, b, c);
			y++;
		}
		x++;
		y = '0';
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	y;

	i = '0';
	y = '0';
	while (i <= '9')
	{
		while (y <= '8')
		{
			bouc(i, y);
			y++;
		}
		i++;
		y = '0';
	}		
}
