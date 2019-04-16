/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** get nbr
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_getnbr(char *str)
{
    int i = 0;
    char *num = malloc(sizeof(char) * my_strlen(str));

    while (str[i] >= '0' && str[i] <= '9') {
        num[i] = str[i];
        i++;
    }
    num[i] = '\0';
    return (num);
}
