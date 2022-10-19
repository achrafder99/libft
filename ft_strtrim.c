/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:58:03 by adardour          #+#    #+#             */
/*   Updated: 2022/10/16 02:18:10 by adardour         ###   ########.fr       */
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
static int begin(char const *ptr, char const *set){
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = 0;
	while (ptr[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if(ptr[i] == set[j]){  //xxachxraf dardourxx set = xxz
				index = i + 1;
				break;
			}
			j++;
		}
		if(ft_found(ptr[i],(char*)set) == 0)
			break;
		i++;
	}
	return (index);
}



char *ft_strtrim(char const *s1, char const *set){

	int index;
	int lastIndex;
	int j;
	char *ptr;	
	char *substr;
	int length;

	lastIndex = 0;
	if(!*s1 && !*set) return NULL;
	length = ft_strlen(s1) - 1;

	ptr = ft_strdup(s1);
	index = begin(ptr,set);
	if (ptr == NULL) return NULL;
	
	while(length){
		j = 0;
		while (set[j] != '\0')
		{
			if(ptr[length] == set[j]){
				lastIndex = length;
				break;
			}
			j++;
		}
		if(lastIndex == 0) lastIndex = length;
		if (ft_found(ptr[length], (char *)set) == 0) break;
		length--;
	}

	ptr[length + 1] = '\0';
	substr = ft_substr(ptr,index, lastIndex + 2);
	return (substr);
}
