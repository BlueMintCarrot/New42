/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joana <joana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:36:50 by joana             #+#    #+#             */
/*   Updated: 2024/11/26 17:33:45 by joana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define HEX "0123456789abcdef"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			write(1, &str[i++], 1);
	}
}

void	ft_put_hexa(unsigned char c)
{
	write(1, &HEX[c / 16], 1);
	write(1, &HEX[c % 16], 1);
}

void	ft_putaddr(unsigned long addr)
{
	int		i;
	char	str[16];

	i = 15;
	while (i >= 0)
	{
		str[i] = HEX[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, str, 16);
}

void	ft_print_memory_helper(unsigned char *c, int i, int size)
{
	int	j;

	j = -1;
	while (++j < 16)
	{
		if (i + j < size)
		{
			ft_put_hexa(c[i + j]);
			if (j % 2 == 1)
				write(1, " ", 1);
		}
		else
			ft_putstr("   ");
	}
	j = -1;
	while (++j < 16)
	{
		if (i + j < size)
		{
			if ((unsigned char)c[i + j] >= 32 && (unsigned char)c[i + j] <= 126)
				write(1, &c[i + j], 1);
			else
				write(1, ".", 1);
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*c;
	int				i;

	i = 0;
	c = (unsigned char *)addr;
	if (size)
	{
		while (i < (int)size)
		{
			ft_putaddr((unsigned long)(c + i));
			ft_putstr(": ");
			ft_print_memory_helper(c, i, (int)size);
			write(1, "\n", 1);
			i += 16;
		}
	}
	return (addr);
}

/* int main() 
{
    char texto[] = "Bonjour les amis\nc'est fou tout ce qu'on peut 
	faire avec print_memory\nlol.lol.\n";
    ft_print_memory(texto, sizeof(texto));
    return (0);
} */