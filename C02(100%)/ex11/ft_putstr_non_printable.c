/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:21:06 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/01 16:36:36 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_convert_to_hexa(char c)
{
	static char	hex[4];
	char		*table;

	table = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = table[c / 16];
	hex[2] = table[c % 16];
	hex[3] = '\0';
	write(1, hex, 4);
	return (0);
}

int	ft_str_len(char *str)
{
	static int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_str_len(str);
	i = 0;
	while (i < len)
	{
		if (str[i] < 32)
		{
			ft_convert_to_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
