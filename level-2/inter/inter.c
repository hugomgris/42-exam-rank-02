/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:00:58 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 09:28:12 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	search(char c, char *abc)
{
	int	i;

	i = 0;
	while (abc[i])
	{
		if (abc[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	process_print(char *abc, char c, int *count)
{
	abc[*count] = c;
	*count += 1;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;
	char	abc[26];

	if (argc == 3)
	{
		i = 0;
		count = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !search(argv[1][i], abc))
					process_print(abc, argv[1][i], &count);
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
