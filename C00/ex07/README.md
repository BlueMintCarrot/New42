# putnbr

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Write a function that prints the number received as a parameter

## Functions

- [ft_putchar](#ft_putchar)
- [ft_putnbr_helper](#ft_putnbr_helper)
- [ft_putnbr](#ft_putnbr)

### ft_putchar

```c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
```

This function writes a given character to the file descriptor we give to it.

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

### ft_putnbr_helper

```c
int	ft_putnbr_helper(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		nb /= 10;
		i *= 10;
	}
	i /= 10;
	return (i);
}
```

This function takes an integer and checks how many times that integer can be divided by 10 until it reaches the value 0.

#### Parameters

- `nb`: an integer

#### Variables

- `i`: a counter for how many times our intger was divided by 10

#### How it Works

In this function we will discover how many digits the number we need to print has that need to be printed. This works by dividing our integer **nb** by 10 as many times needed to reach 0, and we multiply our counter **i** by 10. The number of 0s present in **i** translates to how many times our **nb** was divided by 10.

#### Return

`i`

### ft_putnbr

```c
void	ft_putnbr(int nb)
{
	int	s;

	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb == 0)
		write(1, "0", 1);
	s = ft_putnbr_helper(nb);
	while (s > 0)
	{
		ft_putchar(nb / s + '0');
		nb %= s;
		s /= 10;
	}
}
```

This function will print the number received as a parameter where we wish to print it.

#### Parameters

- `nb`: an integer

#### Variables

- `s`: an integer that will take the return value of our ft_putnbr_helper function and work as a counter

#### How it Works

In order to print our integer **nb**, first we need to check if it has a positive or negative value. If it's a positive value, it will take **nb** and check how many times it was divided with our `ft_putnbr_helper` function. After that, it will enter a while loop in which it will write all digits of the integer received. We will take our **nb** and divided it by **s**, then add '0' in order to turn it into the right ASCII value so it can be printed. This gives us the first digit. Then our **nb** becomes the remainder of the division by our counter and our counter gets divided by 10, because one digit has already been written. And this process goes on until all digits are printed. If **nb** is negative, we multiply it by -1 in order to make it positive (exception of INT_MIN, which is printed directly), and the rest of the process is exactly the same.

#### Return

None