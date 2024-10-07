/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:05:54 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 20:32:49 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	c;

	i = 0;
	l = 0;
	c = 'a';
	while (str[l])
		l++;
	printf("%d\n", l);
	while (i < l / 2)
	{
		c = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = c;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*str = ft_strrev(argv[1]);
		printf("%s", str);
	}
	return (0);
}*/
