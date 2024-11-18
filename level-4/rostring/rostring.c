/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:29:36 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/09 18:28:00 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	fws;
	int	fwe;

	if (argc > 1)
	{
		i = 0;
		fws = 0;
		fwe = 0;
		while (argv[1][i] && is_space(argv[1][i]))
			i++;
		fws = i;
		fwe = i;
		while (argv[1][i] && !is_space(argv[1][i]))
		{
			i++;
			fwe++;
		}
		while (argv[1][i] && is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			while (!is_space(argv[1][i]) && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while (is_space(argv[1][i]))
				i++;
			write(1, " ", 1);
		}
		while (argv[1][fws] && fws < fwe)
		{
			write(1, &argv[1][fws], 1);
			fws++;
		}
	}
	write(1, "\n", 1);
}
