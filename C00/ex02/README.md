# print_reverse_alphabet

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Using the write function in order to print the alphabet in reverse order.

## Functions

- [ft_print_reverse_alphabet](#ft_print_reverse_alphabet)

### ft_print_reverse_alphabet

```c
void	ft_print_alphabet(void)
{
	char	c;

	c = '{';
	while (--c >= 'a')
		write(1, &c, 1);
}
```

#### Parameters

None

#### Variables

- `c`: starting character

#### How it Works

In order to print the alphabet in reverse order (using the write function), we take our starting character **c** and decrement it until we reach the last character we wish to write.

#### Return

None