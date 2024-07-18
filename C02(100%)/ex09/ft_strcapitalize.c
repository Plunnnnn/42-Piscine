/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:20:37 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/01 15:20:39 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcapitalize(char *str)
{
	int	new;
	int	i;

	i = 0;
	new = 1;
	while (str[i] != '\0')
	{
		if (new && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			new = 0;
		}
		else if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					new = 1;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && i != 0)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}
