/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:03:29 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 18:57:49 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	operate(int a, int b, char op)
{
	int	res;

	if (op == '+')
		res = a + b;
	else if (op == '-')
		res = a - b;
	else if (op == '*')
		res = a * b;
	else if (op == '/')
		res = a / b;
	else
		res = a % b;
	return (res);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		res;
	char	op;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		res = operate(a, b, op);
		printf("%d", res);
	}
	printf("\n");
}
