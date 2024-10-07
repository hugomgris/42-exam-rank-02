/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:26:26 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 12:56:09 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	unsigned char bit = 0;
	unsigned char res = reverse_bits((unsigned char)5);
	int i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}*/
