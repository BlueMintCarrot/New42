/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:26:07 by joana             #+#    #+#             */
/*   Updated: 2024/11/21 17:03:24 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_helper(char *abcd)
{
	write(1, &abcd[0], 1);
	write(1, &abcd[1], 1);
	write(1, " ", 1);
	write(1, &abcd[2], 1);
	write(1, &abcd[3], 1);
}

char	ft_print_comb2_helper2(char nb)
{
	if (nb + 1 > '9')
		return ('0');
	else
		return (nb - 1);
}

char	ft_print_comb2_helper3(char nb1, char nb2)
{
	char	nbr;

	nbr = nb1 - 1;
	if (nb2 + 1 > '9')
		nbr -= 1;
	return (nbr);
}

void	ft_print_comb2(void)
{
	char	abcd[4];

	abcd[0] = '/';
	while (++abcd[0] <= '9')
	{
		abcd[1] = '/';
		while (++abcd[1] <= '9')
		{
			abcd[2] = ft_print_comb2_helper3(abcd[0], abcd[1]);
			while (++abcd[2] <= '9')
			{
				abcd[3] = ft_print_comb2_helper2(abcd[1]);
				while (++abcd[3] <= '9')
				{
					if (abcd[0] == abcd[2] && abcd[1] == abcd[3])
						abcd[3] += 1;
					ft_print_comb2_helper(abcd);
					if (abcd[0] == '9' && abcd[1] == '8' && \
					abcd[2] == '9' && abcd[3] == '9')
						return ;
					write (1, ", ", 2);
				}
			}
		}
	}
}

/* int	main(void)
{
	ft_print_comb2();
} */