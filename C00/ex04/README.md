# is_negative

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)

## Overview

Using the write function to write a specific character based on an integer value.

## Functions

- [ft_is_negative](#ft_is_negative)

### ft_is_negative

```c
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
```

#### Parameters

- `n`: an integer

#### Variables

None

#### How it Works

Given the integer **n** we receive, we will see if it's a negative or positive value (0 is considered as positive in this case). If it's a negative value, it will print "N" on the standard output, for any other case, it will print "P".

#### Return

None