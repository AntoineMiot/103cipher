/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103 inverse
*/

#include "include/my.h"

int nb_space(char *space)
{
    int space_count = 0;

    for (int i = 0; i < my_strlen(space); i++) {
        if (space[i] == ' ')
            space_count++;
    }
    return space_count+1;
}

int find_size_matrix_crypt(int len, int len_key)
{
    int size_matrice = 0;

    for (int i = 0; i*len_key < len; i++)
        size_matrice++;
    return (size_matrice * len_key);
}

int find_size_matrix_key(int len)
{
    int size_matrice = 0;

    for (int i = 0; i*i < len; i++)
        size_matrice++;
    return (size_matrice);
}