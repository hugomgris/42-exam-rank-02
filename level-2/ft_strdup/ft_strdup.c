/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:47:51 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 19:52:05 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*res;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	res = (char *)malloc(sizeof(char) * (l + 1));
	if (res == NULL)
		return (NULL);
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*res = ft_strdup(argv[1]);
		printf("%s", res);
	}
}*/
