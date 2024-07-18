/* ************************************************************************** */
/*									    */
/*							:::      ::::::::   */
/*   ft_split.c					 :+:      :+:    :+:   */
/*						    +:+ +:+	 +:+     */
/*   By: bdenfir <marvin@42.fr>		     +#+  +:+       +#+	*/
/*						+#+#+#+#+#+   +#+	   */
/*   Created: 2024/07/10 11:27:44 by bdenfir	   #+#    #+#	     */
/*   Updated: 2024/07/11 13:10:49 by bdenfir	  ###   ########.fr       */
/*									    */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_separator(char c, char *charset)
{
	char	*set;

	set = charset;
	while (*set)
	{	
		if (*charset == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	copy(char *str, char *charset, char **rez)
{
	int	i;
	int	j;
	int	start;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_separator(str[i], charset))
			i++;
		if (i > start)
		{
			rez[j] = (char *)malloc(sizeof(char) * (i - start + 1));
			if (!rez[j])
				return ;
			ft_strncpy(rez[j], &str[start], i - start);
			rez[j++][i - start] = '\0';
		}
	}
	rez[j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**rez;

	if (!str || !charset)
		return (NULL);
	rez = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!rez)
		return (NULL);
	copy(str, charset, rez);
	rez[ft_strlen(str)] = NULL;
	return (rez);
}
