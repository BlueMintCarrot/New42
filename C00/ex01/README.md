# print_alphabet

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Using the write function in order to print the alphabet.

## Functions

- [ft_print_alphabet](#ft_print_alphabet)

### ft_print_alphabet

```c
void	ft_print_alphabet(void)
{
	char	c;

	c = '`';
	while (++c <= 'z')
		write(1, &c, 1);
}
```

#### Parameters

None

#### Variables

- `c`: starting character

#### How it Works

In order to print the alphabet (using the write function), we take our starting character **c** and increment it until we reach the last character we wish to write.
Even though it's a character, these variables have an integer value (ASCII value), and that's the value we're incrementing in order to write the next character.

#### Return

None