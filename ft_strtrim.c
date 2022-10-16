/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:58:03 by adardour          #+#    #+#             */
/*   Updated: 2022/10/16 01:56:04 by adardour         ###   ########.fr       */
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
static int begin(){
	
}

char *ft_strtrim(char const *s1, char const *set){

	int i;
	int index;
	int lastIndex;
	int j;
	int q;
	int kk;
	char *ptr;	
	char *substr;
	int length;

	i = 0;
	index = 0;
	lastIndex = 0;
	kk = 0;
	if(!*s1 && !*set) return NULL;
	length = ft_strlen(s1) - 1;
	q = 0;

	ptr = ft_strdup(s1);
	if (ptr == NULL) return NULL;
	while(ptr[i] != '\0'){
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
int main(){
	printf("|%s", ft_strtrim("  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ", "\t \n"));
	return 0;
}