/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:54:28 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 13:03:14 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 123))
			return (0);
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_str_is_alpha("aaaaaaaaaa1aaAAAAAaaaaaaaa"));
} */