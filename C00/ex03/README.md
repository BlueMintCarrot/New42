# print_numbers

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Using the write function in order to print all digits.

## Functions

- [ft_print_numbers](#ft_print_numbers)

### ft_print_numbers

```c
void	ft_print_numbers(void)
{
	char	c;

	c = '/';
	while (++c <= '9')
		write(1, &c, 1);
}
```

#### Parameters

None

#### Variables

- `c`: starting character

#### How it Works

In order to print all digits (using the write function), we take our starting character **c** and increment it until we reach the last character we wish to write.

#### Return

None