/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_correct.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:06:16 by joana             #+#    #+#             */
/*   Updated: 2024/11/21 17:07:33 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			write(1, &str[i++], 1);
	}
}

void	setup_nbr(char *nbr, int n)
{
	int	i;

	i = 0;
	nbr[i++] = '0';
	while (i < 9)
	{
		if (i < n)
			nbr[i] = nbr[i - 1] + 1;
		else
			nbr[i] = '\0';
		i++;
	}
}

void	increment_number(char *nbr, int n)
{
	int	i;
	int	j;

	j = 0;
	i = n - 1;
	while (i >= 0)
	{
		if (nbr[i] < '9' - (n - 1 - i))
		{
			nbr[i]++;
			j = i + 1;
			while (j < n)
			{
				nbr[j] = nbr[j - 1] + 1;
				j++;
			}
			return ;
		}
		i--;
	}
}

void	ft_combn(int n)
{
	char	nbr[10];

	if (n < 1 || n > 9)
		return ;
	setup_nbr(nbr, n);
	while (!(nbr[n - 1] == '9' && nbr[0] == '9' + 1 - n))
	{
		ft_putstr(nbr);
		ft_putstr(", ");
		increment_number(nbr, n);
	}
	ft_putstr(nbr);
	ft_putstr("\n");
}

/* int main()
{
	ft_combn(5);
} */
