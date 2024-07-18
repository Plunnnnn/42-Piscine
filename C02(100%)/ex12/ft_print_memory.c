/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:21:27 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/01 15:21:28 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef unsigned char	t_byte;

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && i < 16)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return (1);
}

void	ft_hex(t_byte Byte)
{
	char	hex_digit;

	if (Byte / 16 < 10)
		hex_digit = '0' + (Byte / 16);
	else
		hex_digit = 'a' + (Byte / 16 - 10);
	write(1, &hex_digit, 1);
	if (Byte % 16 < 10)
		hex_digit = '0' + (Byte % 16);
	else
		hex_digit = 'a' + (Byte % 16 - 10);
	write(1, &hex_digit, 1);
}

void	ft_print_adress_hex(void *s)
{
	t_byte	*byte;
	int		i;

	byte = (t_byte *)s;
	i = 7;
	while (i >= 0)
	{
		ft_hex(*(byte + i));
		i--;
	}
	write(1, ": ", 2);
}

void	ft_convert_to_hexa(char *str, int *reste)
{
	unsigned int	i;
	static char		hex[3];
	char			*table;

	table = "0123456789abcdef";
	i = 0;
	while (i < 16 && str[i] != '\0')
	{
		hex[0] = table[(unsigned char)str[i] / 16];
		hex[1] = table[(unsigned char)str[i] % 16];
		hex[2] = '\0';
		write(1, hex, 2);
		*reste += 2;
		if (i % 2 == 1 && i != 16 - 1)
		{
			write(1, " ", 1);
			*reste += 1;
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	static int			reste;
	static unsigned int	i;

	if (size == 0)
	{
		return (addr);
	}
	while (i < size)
	{
		ft_print_adress_hex((char *)addr + i);
		ft_convert_to_hexa((char *)addr + i, &reste);
		while (reste <= 39)
		{
			write(1, " ", 1);
			reste++;
		}
		reste = 0;
		ft_str_is_printable((char *)addr + i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
