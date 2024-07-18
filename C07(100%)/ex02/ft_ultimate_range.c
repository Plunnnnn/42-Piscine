/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_ultimate_range.c								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bdenfir <marvin@42.fr>					 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/07/05 11:05:00 by bdenfir		   #+#	#+#			 */
/*   Updated: 2024/07/08 16:18:38 by bdenfir		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc((size + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (size);
}
