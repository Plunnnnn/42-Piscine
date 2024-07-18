/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:52:07 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/08 18:00:44 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if ((index == 0) || (index == 1))
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
