/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strcmp.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bdenfir <marvin@42.fr>					 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/07/02 12:21:44 by bdenfir		   #+#	#+#			 */
/*   Updated: 2024/07/02 12:21:44 by bdenfir		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
