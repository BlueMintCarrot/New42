/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:01:45 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 15:36:21 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	i = -1;
	base = "0123456789abcdef";
	while (str[++i])
	{
		if (str[i] >= 0 && str[i] <= 15)
		{
			write(1, "\\", 1);
			write(1, &base[str[i] / 16], 1);
			write(1, &base[str[i] / 1], 1);
		}
		else if ((str[i] >= 16 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			write(1, &base[str[i] / 16], 1);
			write (1, &base[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
	}
}

/* int	main(void)
{
	char	c = 127;
	char	str[50] = "0123456789";
	
	str[5] = c;
	
	ft_putstr_non_printable(str);
} */