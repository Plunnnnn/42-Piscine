/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:44:00 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/13 10:17:05 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (base[i])
	{
		c = base[i];
		if (c == '-' || c == '+'
			|| c == ' ' || (c >= 9 && c <= 13))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

char	*sapces(char *str, int *s)
{
	*s = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			*s *= -1;
		str++;
	}
	return (str);
}

unsigned int	to_dec(char *str, char *base, int basesize)
{
	unsigned int	n;
	unsigned int	nb;
	int				val;

	nb = 0;
	while (*str)
	{
		n = 0;
		while (base[n] != 0 && base[n] != *str)
			n++;
		if (base[n] == *str)
			val = n;
		else
			val = -1;
		if (val == -1 || val >= basesize)
			return (nb);
		nb = (basesize * nb) + (unsigned int)val;
		str++;
	}
	return (nb);
}

char	*dec_to(unsigned int nb, char *base, int basesize, int s)
{
	unsigned int		len;
	unsigned int		tmp;
	unsigned int		z;
	char				*str;

	z = (nb == 0);
	len = 1 + (s == -1 && z != 1);
	tmp = nb / basesize;
	while (tmp != 0)
	{
		len++;
		tmp /= basesize;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[nb % basesize];
		nb /= basesize;
	}
	if (s == -1 && z != 1)
		str[0] = '-';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				from_size;
	int				to_size;
	int				s;
	unsigned int	rez;

	from_size = check(base_from);
	to_size = check(base_to);
	if (from_size == 0 || to_size == 0)
		return (0);
	nbr = sapces(nbr, &s);
	rez = to_dec(nbr, base_from, from_size);
	return (dec_to(rez, base_to, to_size, s));
}
