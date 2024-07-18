/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdenfir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:05:10 by bdenfir           #+#    #+#             */
/*   Updated: 2024/07/17 17:05:10 by bdenfir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_struct.h"

void	get_list(t_op_func *opearations, char operators[5])
{
	opearations[0] = add;
	opearations[1] = subtract;
	opearations[2] = multiply;
	opearations[3] = divide;
	opearations[4] = modulo;
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '*';
	operators[3] = '/';
	operators[4] = '%';
}

int	main(int argc, char *argv[])
{
	char		op;
	int			i;
	t_op_func	operations[5];
	char		operators[5];

	i = 0;
	if (argc != 4)
		return (0);
	op = argv[2][0];
	get_list(operations, operators);
	while (i < 5 && !argv[2][1])
	{
		if (op == operators[i])
		{
			operations[i](ft_atoi(argv[1]), ft_atoi(argv[3]));
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}
