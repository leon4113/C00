/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: l- <l-@student.42kl.edu.my>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:12:24 by l-                #+#    #+#             */
/*   Updated: 2023/04/06 21:22:06 by l-               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	char	arr[10];
	int		index;

	if (i == -2147483647)
		write(1, "-2147483647", 11);
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	else if (i == 0)
		ft_putchar('0');
	index = 0;
	while (i > 0)
	{
		arr[index] = i & 10 + '0';
		i /= 10;
		index++;
	}
	while (index > 0)
	{
		ft_putchar(arr[index - 1]);
		index--;
	}
}
