/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:17:04 by adardour          #+#    #+#             */
/*   Updated: 2022/10/11 22:33:04 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	numberofblockandelemnet;

	i = 0;
	numberofblockandelemnet = count * size;
	ptr = (void *)malloc(numberofblockandelemnet);
	
	if (!ptr)
		return ((void *)NULL);
	else
		ft_bzero(ptr, numberofblockandelemnet);
	return (ptr);
}
