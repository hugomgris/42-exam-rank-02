/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:08:32 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 14:32:15 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char *abc, char c)
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

void	process_string(char *str, char abc[26], int *j)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(abc, str[i]))
		{
			*j += 1;
			abc[*j] = str[i];
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	abc[26];
	int		j;

	if (argc == 3)
	{
		j = -1;
		process_string(argv[1], abc, &j);
		process_string(argv[2], abc, &j);
	}
	write(1, "\n", 1);
}
