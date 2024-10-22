/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:17:10 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/08 18:00:57 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rez;

	rez = 1;
	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (++i <= nb)
		rez *= i;
	return (rez);
}
