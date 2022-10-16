/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:34:32 by adardour          #+#    #+#             */
/*   Updated: 2022/10/16 00:13:36 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int rows(char const *s,char delimiter){
    int i;
    int rowcount;

    i = 0;
    rowcount = -1;
    while (s[i + 1] != '\0')
    {
        if(s[i] == delimiter && s[i+1] != delimiter) rowcount++;
        i++;
    }
    return rowcount;
}
static int column(char const *s,char c,int index){
    int columnCount;

    columnCount = 0;
    while (s[index + 1] != '\0')
    {
        if(s[index] != c && s[index + 1] != c) columnCount++;
        else if(s[index + 1] == c)break;
        index++;
    }
    return columnCount;
}
static size_t gettingstrlen(char *s,char c,int index){

    size_t length;
    length = 0;
    while (s[index] != '\0')
    {
        while(s[length] != c){
            if(s[length + 1] == c)break;
            length++;
        }
        if(s[length + 1] == c)break;
        index++;
    }
    return length;
}
char **ft_split(char const *s, char c){
    char **ptr;
    int rowcount;
    int j;
    int k;
    int index;


    rowcount = rows(s,c);
    ptr = malloc(sizeof(char *) * rowcount + 1);
    k = 0;
    index = -1;
    j = 0;
    if (ptr == NULL)
        return NULL;

    while(k <= rowcount){
        while(ft_strtrim(s,c)[j] != c){
            ptr[k] = (char *)malloc(sizeof(char) * (gettingstrlen(ft_strtrim(s,c), c, j)) + 1); // achraf|dardour === strtrim
            j++;
        }
        k++;
    }
    return ptr;
}

int main(){
    char **res = ft_split("|achraf|dardour|",'|');
    return (0);
}