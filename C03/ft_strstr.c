/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:41:10 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 19:03:28 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char	*haystack, char	*needle)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	if (haystack && needle)
	{
		while (haystack[i] && needle[j])
		{
			if (haystack[i] == needle[j])
				flag = 1;
			i++;
			j++;
		}
	}
	if (flag == 0)
		return (NULL);
	else
		return (needle[j]);
}
