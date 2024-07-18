/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   is_sorted_ascending.c							  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bdenfir <marvin@42.fr>					 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/07/11 09:57:01 by bdenfir		   #+#	#+#			 */
/*   Updated: 2024/07/11 10:14:57 by bdenfir		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

int	is_sorted_ascending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	is_sorted_others(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (is_sorted_ascending(tab, length, f)
		|| is_sorted_others(tab, length, f));
}
/*

int tt(int a, int b)
{
	return (a - b);
}
#include <stdio.h>
int main(){
	int tab[5] = {1, 2, 8, 4, 5};
	int tab2[5] = {5, 4, 38, 2, 1};

	printf("%d", ft_is_sort(tab, 5, tt));
	printf("%d",ft_is_sort(tab2, 5, tt));
}
*/
