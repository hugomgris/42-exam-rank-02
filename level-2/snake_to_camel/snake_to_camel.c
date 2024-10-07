/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:56:55 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 13:14:31 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

char	*process_snake(char *snake, char *res)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (snake[i])
	{
		if (snake[i] == '_')
		{
			i++;
			snake[i] = ft_toupper(snake[i]);
		}
		res[j] = snake[i];
		i++;
		j++;
	}
	return (res);
}

void	write_camel(char	*camel)
{
	int	i;

	i = 0;
	while (camel[i])
	{
		write(1, &camel[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		l;
	char	*res;

	if (argc == 2)
	{
		i = 0;
		l = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
				l--;
			l++;
			i++;
		}
		i = 0;
		res = (char *)malloc(sizeof(char) * (l + 1));
		if (res == NULL)
			return (0);
		res = process_snake(argv[1], res);
		write_camel(res);
	}
	write (1, "\n", 1);
}
