/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:39:26 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 19:47:07 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

int	reject_char(char c, const char *reject)
{
	int	i;

	i = 0;
	while (reject[i])
	{
		if (reject[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (!reject_char(s[i], reject))
			i++;
		break ;
	}
	return (i);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t c = ft_strcspn(argv[1], argv[2]);
		printf("%zu", c);
	}
	return (0);
}*/
