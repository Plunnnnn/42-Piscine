/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:56:31 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/03 15:52:52 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;

	i = 0;
	j = 0;
	slen = ft_len(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	dlen = i;
	if (size == 0 || size <= dlen)
		return (size + slen);
	while (src[j] != '\0' && j < size - dlen -1)
	{	
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (slen + dlen);
}
