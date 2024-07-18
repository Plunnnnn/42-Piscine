/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:09:40 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/17 17:09:40 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_STRUCT_H
# define OP_STRUCT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef void	(*t_op_func)(int, int);

void	add(int a, int b);
void	subtract(int a, int b);
void	multiply(int a, int b);
void	divide(int a, int b);
void	modulo(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
