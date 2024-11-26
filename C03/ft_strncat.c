/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:21:38 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 18:39:06 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (src && dest)
	{
		while (dest[++i])
			;
		while (src[++j] && j < (int)n)
		{
			dest[i] = src[j];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

/* int	main(void)
{
	char	src[] = "hijklmnop";
	char	*dest = NULL;
	printf("str -> %s\n", ft_strncat(dest, src,15));
} */