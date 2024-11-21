/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:53:05 by joana             #+#    #+#             */
/*   Updated: 2024/11/21 18:17:24 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		swap = 0;
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = 1;
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		if (!swap)
			break ;
		i++;
	}
}

/* int	main(void)
{
	int	array[] = {4, 6, 3, 1, 5, 2};
	ft_sort_int_tab(array, 6);
	for (int i = 0; i < 6; i++)
		printf("tab[%d] = %d\n", i, array[i]);
} */