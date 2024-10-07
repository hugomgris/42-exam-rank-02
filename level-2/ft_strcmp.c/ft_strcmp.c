/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:30:54 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 19:37:48 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	c = ft_strcmp(argv[1], argv[2]);
		printf("%d", c);
	}
}*/
