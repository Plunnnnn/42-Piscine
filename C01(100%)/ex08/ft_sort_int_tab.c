/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:26:35 by bdenfir           #+#    #+#             */
/*   Updated: 2024/06/28 14:42:45 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	deb;
	int	max;
	int	ch;

	deb = 0;
	ch = 0;
	while (deb <= size - 1)
	{
		max = tab[deb];
		ch = deb;
		while (ch <= size - 1)
		{
			if (tab[ch] <= max)
			{
				max = tab[ch];
				ft_swap(&tab[deb], &tab[ch]);
			}
			ch++;
		}
		deb++;
	}
}
