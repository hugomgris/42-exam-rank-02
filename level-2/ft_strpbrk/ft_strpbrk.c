/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:52:50 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 20:03:49 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*res;
	
	if (argc == 3)
	{
		res = ft_strpbrk(argv[1], argv[2]);
		printf("%s", res);
	}
	return (0);
}*/
