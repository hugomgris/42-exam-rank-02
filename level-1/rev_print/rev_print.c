/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:47:15 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 10:58:24 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	while (0 <= l)
	{
		write(1, &str[l], 1);
		l--;
	}
	write (1, "\n", 1);
	return (str);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = rev_print(argv[1]);
		printf("\n%s", str);
	}
	return (0);
}*/
