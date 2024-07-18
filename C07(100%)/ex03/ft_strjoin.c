/* ************************************************************************** */
/*										*/
/*							:::	  ::::::::   */
/*   ft_strjoin.c					   :+:	  :+:	:+:   */
/*							+:+ +:+	 +:+	 */
/*   By: bdenfir <marvin@42.fr>			 +#+  +:+	   +#+	*/
/*						+#+#+#+#+#+   +#+	   */
/*   Created: 2024/07/08 10:30:46 by bdenfir	   #+#	#+#		 */
/*   Updated: 2024/07/11 18:33:20 by bdenfir	  ###   ########.fr	   */
/*										*/
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*init_memory(int size, char **strs, char *sep)
{
	int		rez;
	int		slen;
	int		i;
	char	*ptr;

	if (size == 0)
	{
		ptr = (char *)malloc(1);
		if (ptr)
			ptr[0] = '\0';
		return (ptr);
	}
	slen = ft_len(sep);
	rez = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
				rez += ft_len(strs[i]);
		i++;
	}
	rez += slen * (size - 1);
	rez += 1;
	return ((char *)malloc(rez * sizeof(char)));
}

void	join_em(int size, char **strs, char *sep, char *ptr)
{
	int	i;
	int	j;
	int	k;
	int	slen;

	k = 0;
	slen = ft_len(sep);
	i = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
		{
			j = 0;
			while (strs[i][j])
			ptr[k++] = strs[i][j++];
			if (i < size - 1)
			{
				j = 0;
				while (j < slen)
				ptr[k++] = sep[j++];
			}
		}
		i++;
	}
	ptr[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;

	ptr = init_memory(size, strs, sep);
	if (!ptr)
		return (NULL);
	join_em(size, strs, sep, ptr);
	return (ptr);
}
