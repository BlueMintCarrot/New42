/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:02:33 by joana             #+#    #+#             */
/*   Updated: 2024/11/21 17:03:36 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//void	ft_putnbr(int nb)
//{
//	if (nb == INT_MIN)
//		write(1, "-2147483648", 11);
//	else if (nb < 0)
//	{
//		write(1, "-", 1);
//		ft_putnbr(nb * -1);
//	}
//	else if (nb >= 10)
//	{
//		ft_putnbr(nb / 10);
//		ft_putnbr((nb % 10));
//	}
//	else
//		ft_putchar(nb + '0');
//}

int	ft_putnbr_helper(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		nb /= 10;
		i *= 10;
	}
	i /= 10;
	return (i);
}

void	ft_putnbr(int nb)
{
	int	s;

	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb == 0)
		write(1, "0", 1);
	s = ft_putnbr_helper(nb);
	while (s > 0)
	{
		ft_putchar(nb / s + '0');
		nb %= s;
		s /= 10;
	}
}

/* int	main(void)
{
	ft_putnbr(-5964);
} */