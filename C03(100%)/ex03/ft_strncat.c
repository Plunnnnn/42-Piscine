/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:58:20 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/03 15:52:49 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_ptr;
	unsigned int	i;

	dest_ptr = dest;
	i = 0;
	if (nb == 0)
		return (dest);
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && i < nb)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		i++;
	}
	*dest_ptr = '\0';
	return (dest);
}
