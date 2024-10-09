/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:04:13 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/09 19:05:55 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	l;

	if (argc == 2)
	{
		l = 0;
		while (argv[1][l])
			l++;
		l--;
		while (argv[1][l] && is_space(argv[1][l]))
			l--;
		while (argv[1][l] && !is_space(argv[1][l]))
			l--;
		l++;
		while (argv[1][l] && !is_space(argv[1][l]))
		{
			write(1, &argv[1][l], 1);
			l++;
		}
	}
	write (1, "\n", 1);
}
