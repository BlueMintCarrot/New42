/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:18:41 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 18:21:32 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = -1;
	if (s1 && s2)
	{
		while (s1[++i] && s2[i] && i < (int)n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "";
	char	s2[] = "asdasddas";
	printf("%d\n", ft_strncmp(s1, s2, 8));
} */