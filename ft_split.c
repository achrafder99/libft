/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:34:32 by adardour          #+#    #+#             */
/*   Updated: 2022/10/15 22:46:17 by adardour         ###   ########.fr       */
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
static size_t gettingstrlen(char *s,char c){

    size_t len;
    int i;
    
    len = 0;
    i = 0;
    while (s[i] != '\0')
    {
        while(s[len] != c)
            if(s[len + 1] == c)break;
        len++;
        i++;
    }
    return len;
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
        while((s[j] != '\0') && s[j] == c && s[j + 1] != c){
                ptr[k] = malloc(sizeof(char) * column(s,c,j) + 1);
                j++;
        }
        k++;
    }

    printf("%d\n",rowcount);

    return ptr;
}

int main(){
    char **res = ft_split("|achraf|dardour|",'|');
    return (0);
}