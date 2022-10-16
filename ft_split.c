/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:34:32 by adardour          #+#    #+#             */
/*   Updated: 2022/10/16 12:40:00 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int rows(char const *s, char delimiter);
static int columnCount(char *str, char delimiter,int index);

char **ft_split(char const *s, char c){
    char **ptr;
    int rowcount;
    int j;
    int k;
    int index;
    int stop;
    int aa;

    rowcount = rows(s,c);
    ptr = malloc(sizeof(char *) * rowcount + 1);
    k = 0;
    index = -1;
    j = 0;
    stop = 0;
    aa = 0;
    if (ptr == NULL){
         free(ptr);
         ptr = NULL;
    }
    while(rowcount > j){
        ptr[j] = malloc(sizeof(char) * columnCount(ft_strtrim(s,&c),c,aa) + 1); // achraf| dardour
        if(ptr[j] == NULL)
        {
            free(ptr[j]);
            ptr[j] = NULL;
        }
        while(ft_strtrim(s,&c)[aa] != '\0' && ft_strtrim(s,&c)[aa] != c){
            stop++;
            aa++;
        }
        rowcount--;
        j++;
    }
    j = 0;
    aa = 0;
    while (rowcount > j)
    {
        // Error is Here
        while(ft_strtrim(s,&c)[aa] != '\0' && ft_strtrim(s,&c)[aa] != c){  //|achraf dardour|beerada|hfvfe
            ptr[j][aa] = ft_strtrim(s,&c)[aa];
            aa++;
        }
        ptr[j][aa] = '\0';
        aa = aa;
        rowcount--;
        j++;
    }

    return ptr;
}


static int rows(char const *s, char delimiter)
{
    int i;
    int rowcount;

    i = 0;
    rowcount = 0;
    while (s[i + 1] != '\0')
    {
        if(s[i] == delimiter && s[i+1] != delimiter) rowcount++;
        i++;
    }
    return (rowcount);
}

static int columnCount(char *str,char delimiter,int index){
    int length;

    length = 0;
    while(str[index] != '\0' && str[index] != delimiter){
        length++;
        index++;
    }
    return (length);
}

int main(){
    int j;
    j = 0;
    char **str = ft_split("|achraf dardour|beerada|hfvfe", '|');
    while(j <= 2){
        printf("%s\n",str[j]);
        j++;
    }
    return 0;
}