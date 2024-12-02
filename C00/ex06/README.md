# print_comb2

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

This exercise is similar to the previous one, but they want all combinations of two digit numbers, without repeating them, for example, we won't write 01 01 or 10 10.

## Functions

- [print_single_number](#print_single_number)
- [print_number](#print_number)
- [ft_print_comb2](#ft_print_comb2)

### print_single_number

```c
void	print_single_number(int nbr)
{
	char	n1;
	char	n2;

	n1 = (nbr / 10) + '0';
	n2 = (nbr % 10) + '0';
	write(1, &n1, 1);
	write(1, &n2, 1);
}
```

This function receives a (maximum) two-digit integer as a parameter and prints it on the screen.

#### Parameters

- `nbr`: integer between 0 and 99

#### Variables

- `n1`: first digit of the integer as a character (if nbr is a single digit integer, this will be 0)
- `n2`: second digit of the integer as a character

#### How it Works

**n1** is obtained by dividing the integer received by 10, and then it adds the character '0' (or 48) to it, to get the correct ASCII value.

**n2** is obtained by getting the module of the division of the integer received by 10, and then it adds the character '0' (or 48) to it, to get the correct ASCII value.

Then, it writes both characters to the standard output.

#### Return

None

### print_number

```c
void	print_numbers(int nbr1, int nbr2)
{
	print_single_number(nbr1);
	write(1, " ", 1);
	print_single_number(nbr2);
	if (!(nbr1 == 98 && nbr2 == 99))
		write(1, ", ", 2);
}
```

#### Parameters

- `nbr1`: The first (maximum) two-digit integer to be printed
- `nbr2`: The second (maximum) two-digit integer to be printed

#### Variables

None

#### How it Works

This function will call the other function in order to print both our integers, separating both integers by a space and each combination of two integers with a comma and a space (with the exception of the last combination possible, which doesn't require separation).

#### Return

None

### ft_print_comb2

```c
void	ft_print_comb2(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			print_numbers(nbr1, nbr2);
			nbr2++;
		}
		nbr1++;
	}
}
```

#### Parameters

None

#### Variables

- `nbr1`: The first (maximum) two-digit integer (starting at 0)
- `nbr2`: The second (maximum) two-digit integer (value of nbr1 + 1)

#### How it Works

In this function we calculate which integer combination will be printed. When all possible combinations are written for the value of the first integer, nbr1 increments and we start the process again, until there are no combinations left.

#### Return

None