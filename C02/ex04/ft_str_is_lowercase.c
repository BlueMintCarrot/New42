/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:03:23 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 13:05:45 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("zzzzzzABCzaaaaaaaa"));
} */