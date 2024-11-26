/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:51:21 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 19:03:18 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (size > 0)
	{
		while (dest[++j])
			;
		while (++i < (int)(size - 1))
		{
			dest[j] = src[i];
			j++;
		}
	}
	dest[j] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	int		len = 8;
	char	src[] = "hijklmnop";
	char	dest[] = "abcdefg";
	printf("str -> %d\n", ft_strlcat(dest, src, len));
} */