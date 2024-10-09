/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:09:23 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/09 19:32:19 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_in_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				aux;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}

/*#include <stdio.h>
void sort_in_tab(int *tab, unsigned int size);

int main()
{
    int tab[] = {5, 2, 9, 1, 5, 6};
    unsigned int size = sizeof(tab) / sizeof(tab[0]);
    unsigned int i;

    printf("Original array:\n");
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    sort_in_tab(tab, size);

    printf("Sorted array:\n");
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return 0;
}*/
