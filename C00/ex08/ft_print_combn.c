/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:06:07 by joana             #+#    #+#             */
/*   Updated: 2024/11/21 17:08:35 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

	i = n - 1;
	if (nbr[i] + 1 <= '9')
		nbr[i] = nbr[i] + 1;
	else
	{
		while (i >= 0)
		{
			if (nbr[i] == '9')
			{
				nbr[i - 1] = nbr[i - 1] + 1;
				nbr[i] = nbr[i - 1] + 1;
			}
			i--;
		}
		while (i < n)
		{
			if (nbr[i] >= '9')
				nbr[i] = nbr[i - 1] + 1;
			i++;
		}
	}
}

int	ft_is_correct(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (nbr[i] < '0' || nbr[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_combn(int n)
{
	char	nbr[10];

	if (n < 1 || n > 9)
		return ;
	setup_nbr(nbr, n);
	while (!(nbr[n - 1] == '9' && nbr[0] == '9' + 1 - n))
	{
		if (ft_is_correct(nbr))
		{
			ft_putstr(nbr);
			ft_putstr(", ");
		}
		increment_number(nbr, n);
	}
	ft_putstr(nbr);
	ft_putstr("\n");
}

/* int main()
{
	ft_combn(5);
} */
