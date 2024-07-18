/* ************************************************************************** */
/*										*/
/*							:::	  ::::::::   */
/*   ft_sort_params.c				   :+:	  :+:	:+:   */
/*							+:+ +:+	 +:+	 */
/*   By: bdenfir <marvin@42.fr>			 +#+  +:+	   +#+	*/
/*						+#+#+#+#+#+   +#+	   */
/*   Created: 2024/07/04 15:38:35 by bdenfir	   #+#	#+#		 */
/*   Updated: 2024/07/08 19:00:36 by bdenfir	  ###   ########.fr	   */
/*										*/
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
	s1++;
	s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_str_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	sorted;

	i = 0;
	while (i < size - 1)
	{
		sorted = 1;
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_strswap(&tab[j], &tab[j + 1]);
				sorted = 0;
			}
			j++;
		}
		if (sorted)
			break ;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_str_tab(argv + 1, argc - 1);
	i = 0;
	while (++i < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		ft_putchar('\n');
	}
	return (0);
}
