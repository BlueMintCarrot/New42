/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:58:28 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 13:03:17 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_str_is_numeric(""));
} */