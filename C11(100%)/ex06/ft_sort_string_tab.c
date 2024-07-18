/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:23:39 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/18 10:55:45 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
	s1++;
	s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	sorted;

	i = 0;
	while (i < ft_len(tab) - 1)
	{
		sorted = 1;
		j = 0;
		while (j < ft_len(tab) - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_strswap(&tab[j], &tab[j + 1]);
				sorted = 0;
			}
			j++;
		}
		if (sorted)
			break ;
		i++;
	}
}
