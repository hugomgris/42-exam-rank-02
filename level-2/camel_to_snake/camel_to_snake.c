/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:14:26 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 16:02:16 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	camel_check(char *str)
{
	int	i;

	i = 0;
	if (str && ft_isupper(str[0]))
		return (0);
	else
		while (str[i++])
			if (ft_isupper(str[i]))
				return (1);
	return (0);
}

char	*process_camel(char *str)
{
	int		l;
	int		i;
	char	*snake;

	i = 0;
	l = 0;
	while (str[i])
	{
		if (ft_isupper(str[i]))
			l++;
		l++;
		i++;
	}
	snake = (char *)malloc(sizeof(char) * (l + 1));
	if (snake == NULL)
		return (NULL);
	return (snake);
}

void	write_snake(char *camel, char *snake)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (camel[i])
	{
		if (ft_isupper(camel[i]))
		{
			snake[j] = '_';
			j++;
			camel[i] = camel[i] + 32;
		}
		snake[j] = camel[i];
		i++;
		j++;
	}
	i = 0;
	while (snake[i])
	{
		write(1, &snake[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*snake;

	if (argc == 2)
	{
		if (camel_check(argv[1]))
		{
			snake = process_camel(argv[1]);
			if (snake == NULL)
			{
				free(snake);
				snake = NULL;
				return (0);
			}
			write_snake(argv[1], snake);
		}
	}
	write(1, "\n", 1);
}
