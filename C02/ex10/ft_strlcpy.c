/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:45:45 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 15:00:33 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = -1;
	if (size > 0)
	{
		while (++i < (int)(size - 1))
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/* int	main(void)
{
	int		len = 2;
	char	src[] = "123456789";
	char	dest[20];
	char	dest2[20];

	printf("Mine     -> %d - %s\n", ft_strlcpy(dest, src, len), dest);
	printf("Original -> %ld - %s\n", strlcpy(dest2, src, len), dest2);
} */