/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:24:49 by adardour          #+#    #+#             */
/*   Updated: 2022/10/20 17:17:47 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigitis(int n)
{
	c	count;

	count.countdigitis = 0;
	if (n < 0)
		count.countdigitis = 1;
	while (n != 0)
	{
		n = n / 10;
		count.countdigitis++;
	}
	return (count.countdigitis);
}

char	*ft_itoa(int n)
{
	char *str;
	int numberofdigitis;
	char *buffer;
	int i;
	int length;
	long long int number;

	number = (long int)n;

	if (number == 0)
	{
		buffer = (char *)malloc(sizeof(char) * 2);
		buffer[0] = '0';
		buffer[1] = '\0';
		return (buffer);
	}
	numberofdigitis = countdigitis(n);
	i = 0;
	str = (char *)malloc((numberofdigitis * sizeof(char)) + 1);
	buffer = ft_calloc(numberofdigitis, sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	else if (number < 0)
	{
		buffer[i] = '-';
		number *= -1;
	}
	while (number > 0)
	{
		str[i] = number % 10 + 48;
		number = number / 10;
		i++;
	}
	str[i] = '\0';
	length = ft_strlen(str);

	i = 0;
	if (buffer[i] == '-')
		i += 1;
	while (length - 1 >= 0)
	{
		buffer[i] = str[length - 1];
		length--;
		i++;
	}
	return (buffer);
}