# putchar

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Using the write function in order to print a given character.

## Functions

- [ft_putchar](#ft_putchar)

### ft_putchar

```c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
```

#### Parameters

- `c`: a printable character (between the values of 32 and 126)

#### Variables

None

#### How it Works

The write function in c is used to write a character or a string into a file.
It receives three parameters:

- **FD Number**: it refers to where the character or string will be written, in this case, 1, which is the standar output (our terminal)
- **Character or String**: what will be written. In this case, we send the address of the character we wish to write (with the '&')
- **Number of bytes**: how many bytes we wish to write (1 character takes 1 byte)

#### Return

None