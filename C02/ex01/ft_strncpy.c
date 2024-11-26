/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:37:16 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 12:54:08 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = -1;
	while (src[++i] && i < (int)n)
		dest[i] = src[i];
	while (i < (int)n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	src[50] = "abcdefghij";
	char	dest[50];

	ft_strncpy(dest, src, 15);
	printf("dest2 = %s, size = %ld\n", strncpy(dest, src, 5), strlen(dest));
} */