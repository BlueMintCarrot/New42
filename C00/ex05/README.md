# print_comb

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Write a function that displays all possible 3-digit combinations, without repeating any digits and combinations. (if 073 is written, it won't write 730)

## Functions

- [ft_print_comb](#ft_print_comb)

### ft_print_comb

```c
void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '/';
	while (++x <= '7')
	{
		y = x;
		while (++y <= '8')
		{
			z = y;
			while (++z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (!(x == '7' && y == '8' && z == '9'))
					write(1, ", ", 2);
			}
		}
	}
}
```

#### Parameters

None

#### Variables

- `x`: first digit of the 3-digit combination (starting at 0)
- `y`: second digit of the 3-digit combination (starting at 1)
- `z`: third digit of the 3-digit combination (starting at 2)

#### How it Works

In order to write the combinations, we take our three digits, (**x**, **y**, **z**) and print them. The three while loops work in a way that all combinations will be written because the values are being reset when a while loop finishes. For example, we reach 029, it will exit the third while loop, increment the second digit in the second while loop and keep on printing every combination.

#### Return

None