/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:07:16 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 13:09:06 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_str_is_uppercase(""));
} */