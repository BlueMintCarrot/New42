# ft_print_combn

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Write a function that displays all possible combinations of 1 to 9 digits in ascending order, without repeating any digits.

## Functions

- [ft_putstr](#ft_putstr)
- [setup_nbr](#setup_nbr)
- [increment_number](#increment_number)
- [is_correct](#is_correct)
- [ft_print_combn](#ft_print_combn)

### ft_putstr

```c
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
```

This function takes a string and will print all characters present in the string.

#### Parameters

- `str`: a char pointer

#### Variables

- `i`: index for the string (starting at 0)

#### How it Works

In order to print the string **str** we receive, we will begin to write it at the first character in position **i** (string position begins at position 0), and we print every character until we reach the end of the string.

### setup_nbr

```c
void	setup_nbr(char *nbr, int n)
{
	int	i;

	i = 0;
	nbr[i++] = '0';
	while (i < 9)
	{
		if (i < n)
			nbr[i] = nbr[i - 1] + 1;
		else
			nbr[i] = '\0';
		i++;
	}
}
```

This function will calculate what digit combination will be printed next.

#### Parameters

- `nbr`: a char pointer which corresponds to our digit combination
- `n`: an integer between 1 and 9

#### Variables

- `i`: index for the string (starting at 0)

#### How it Works

In this function, we will set our string **nbr**. If the index **i** is smaller than the **n** value, the current position will become the value of the previous position plus one. If **i** becomes bigger than **n**, it will just fill the rest of the string with null characters.

#### Return

None

### increment_number

```c
void	increment_number(char *nbr, int n)
{
	int	i;

	i = n - 1;
	if (nbr[i] + 1 <= '9')
		nbr[i] = nbr[i] + 1;
	else
	{
		while (i >= 0)
		{
			if (nbr[i] == '9')
			{
				nbr[i - 1] = nbr[i - 1] + 1;
				nbr[i] = nbr[i - 1] + 1;
			}
			i--;
		}
		while (i < n)
		{
			if (nbr[i] >= '9')
				nbr[i] = nbr[i - 1] + 1;
			i++;
		}
	}
}
```

This function will calculate the next digit combination that will be printed.

#### Parameters

- `nbr`: a char pointer which corresponds to our digit combination
- `n`: an integer between 1 and 9

#### Variables

- `i`: last digit of our combination

#### How it Works

In order to calculate the next correct digit combination, there are two options. If the current position of the string **nbr[i]** is smaller than 9, it will increment the **nbr[i]** by 1. If the value 9 has been reached, we need to change all digits in the combination. If **nbr[i]** is 9, then **nbr[i - 1]** will increment by one, and **nbr[i]** will be the new value of **nbr[i - 1]** plus 1, and so on until there are no more digits left to change. After that, we enter a while loop in which we will check if any digits have the value of 9, if so, that current position **nbr[i]** will become the value of **nbr[i - 1]** plus one.

#### Return

None

### is_correct

```c
int	is_correct(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (nbr[i] < '0' || nbr[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
```

This function will check if all the characters in the string are digits.

#### Parameters

- `nbr`: a char pointer which corresponds to our digit combination

#### Variables

- `i`: index for the string (starting at 0)

#### How it Works

It will take the string **nbr** and check each character to see if it is a digit.

#### Return

1: if all characters are digits
0: if (at least) one character isn't a digit

### ft_print_combn

```c
void	ft_print_combn(int n)
{
	char	nbr[10];

	if (n < 1 || n > 9)
		return ;
	setup_nbr(nbr, n);
	while (!(nbr[n - 1] == '9' && nbr[0] == '9' + 1 - n))
	{
		if (is_correct(nbr))
		{
			ft_putstr(nbr);
			ft_putstr(", ");
		}
		increment_number(nbr, n);
	}
	ft_putstr(nbr);
	ft_putstr("\n");
}
```

#### Parameters

- `n` - an integer with value between 1 and 9

#### Variables

- `nbr[10]`: an array of 10 characters

#### How it Works

In this function, we will print all possible combinations of **n** digits. We start by setting up our string **nbr** with the function `setup_nbr`, and then we enter a while loop, until we don't reach the last possible combination, it will check if all characters in **nbr** are correct, if so, it will print **nbr**, separate our current combination with a comma and a space, and then it will increment **nbr** to give us the next combination to be printed, and so on.

#### Return

None