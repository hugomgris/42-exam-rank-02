/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:16:44 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 09:50:30 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*s2 = "Moulinette is Skynet's predecessor";
	char	*s1;
   	int l = 0;
	while (s2[l])
		l++;
	s1 = (char *)malloc(sizeof(char) * (l + 1));
	if (s1 == NULL)
		return (0);	
	s1 = ft_strcpy(s1, s2);
	printf("%s", s1);
}*/
