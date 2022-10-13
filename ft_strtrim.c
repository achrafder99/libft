/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:58:03 by adardour          #+#    #+#             */
/*   Updated: 2022/10/13 20:24:49 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_found(char c,char *set){
	int i;
	i = 0;
	while(set[i] != '\0'){
		if(set[i] == c){
			return 1;
		}
		i++;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set){

	int i;
	int index;
	int lastIndex;
	int j;
	int q;
	char *ptr;
	int length;

	i = 0;
	index = 0;
	lastIndex = 0;
	length = ft_strlen(s1);
	q = 0;

	ptr = (char*)malloc(sizeof(char) * ((lastIndex - index) + 2));
	while(s1[i] != '\0'){
		j = 0;
		while (set[j] != '\0')
		{
			if(s1[i] == set[j]){
				index = i;
				break;
			}
			j++;
		}
		if(ft_found(s1[index + 1],(char*)set) == 0)
			break;
		i++;
	}
	
	while(length--){
		j = 0;
		while (set[j] != '\0')
		{
			if(s1[length] == set[j]){
				lastIndex = length;
				break;
			}
			j++;
		}
		if(ft_found(s1[length],(char*)set) == 0)
			break;
		i++;
	}

	if(ptr == NULL) return NULL;
	while(index <= lastIndex){
		ptr[q] = s1[index];
		index++;
		q++;
	}
	ptr[q] = '\0';
	return (ptr);
}
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "xxachrafxxx"; // i
	s2 = "xx"; // j
	printf("%s", ft_strtrim(s1, s2));
	return (0);
}
// achrafxx
// xx