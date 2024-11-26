/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:25:11 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 15:01:13 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((i == 0 && str[i] >= 97 && str[i] <= 122) || \
			(str[i] >= 97 && str[i] <= 122 && str[i - 1] == 32))
			str[i] -= 32;
	}
	return (str);
}

/* int	main(void)
{
	char str[] = "1la tudo bem?";
	ft_strcapitalize(str);
	printf("%s", str);
} */