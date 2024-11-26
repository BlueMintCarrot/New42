/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:09:57 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 18:18:38 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	if (s1 && s2)
	{
		while (s1[++i] && s2[i])
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "abcdeF";
	char	s2[] = "abcdef";
	printf("%d\n", ft_strcmp(s1, s2));
} */