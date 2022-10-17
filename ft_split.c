/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:34:32 by adardour          #+#    #+#             */
/*   Updated: 2022/10/17 23:38:43 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int getRows(char const *s, char delimiter){
    char *trim;
    int count;
    int OUT;

    count = 0;
    trim = ft_strtrim(s,&delimiter);
    while (*trim != '\0')
    {
        if(*trim == delimiter)  OUT = 0;
        else if(OUT == 0){
            OUT = 1;
            ++count;
        }
        ++trim;
    }
    return (count + 1);
}
static int getColumn(char *str,char delimiter,int index){
    int length;
    length = 0;

    while (str[index] != '\0')
    {
        if(str[index] == delimiter)break;
        index++;
    }
    return (index);
}

char **ft_split(char const *s, char c){
    char **ptr;
    char *trim;
    int i;
    rowsandcolumn rc;

    i = 0;
    rc.row = getRows(s, c);
    rc.nextBlock = 0;
    ptr = malloc(sizeof(char*) * (rc.row + 1));
    trim = ft_strtrim(s,&c);
    if (ptr == NULL) return NULL;
    while(rc.row > 0){
        while(trim[i] != '\0'){ // achraf||||dardour||||aaaa||aaa|||sss|||||sssss
            if(trim[i] == c) break;
            ptr[rc.nextBlock] = (char *)malloc(sizeof(char) * (getColumn(trim, c, i) + 1));
            i += getColumn(trim, c, i) - 1;
            i++; 
        }
        if(trim[i + 1] != c){
             rc.nextBlock++;
             rc.row--;
            
        }
      ++i;
      rc.nextBlock = rc.nextBlock;
      rc.row = rc.row;
    }
    int j = 0;
    rc.nextBlock = 0;
    rc.row = 3;
    while(rc.row > 0){
        i = j;
        j = 0;
        while (trim[i] != '\0')
        {
            if (trim[i] == c)
                break;
            ptr[rc.nextBlock][j] = trim[i]; // achraf||||dardour|hiba
            if (trim[i + 1] == c)
                ptr[rc.nextBlock][j + 1] = '\0';
            j++;
        }

        if(trim[i] == c && trim[i + 1] == c){
            rc.nextBlock = rc.nextBlock;
            rc.row = rc.row;
            j++;
        }
        rc.nextBlock++;
        rc.row--;
        j += 1;
    }
    return (ptr);
}

int main(){
    //achraf||||dardour||||aaaa||aaa|||sss|||||
    char **res = ft_split("||||||achraf||||dardour||||aaaa||aaa|||sss|||||sssss",'|');
    return 0;
}