/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:30:23 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 18:30:58 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (src && dest)
	{
		while (dest[++i])
			;
		while (src[++j])
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
	char	dest[] = "abcdefg";
	printf("str -> %s\n", ft_strcat(dest, src));
} */