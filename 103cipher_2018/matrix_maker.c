/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103 inverse
*/

#include "include/my.h"
#include <stdlib.h>

void display_matrix_key(int size, float *matrix);

void make_matrix_crypt(char **av, float size_matrice, float *matrice_crypt)
{
    int tmp = 0;

    for (int i = 0; i < size_matrice; i++) {
        if (i < my_strlen(av[1])) {
            tmp = av[1][i];
            matrice_crypt[i] = tmp;
        }
        else
            matrice_crypt[i] = 0;
    }
}

void make_matrix_key(char **av, float *matrice_key, int nb_col, int type)
{
    int size_matrice = nb_col * nb_col;
    float tmp = 0;

    for (int i = 0; i < size_matrice; i++) {
        if (i < my_strlen(av[2])) {
            tmp = av[2][i];
            matrice_key[i] = tmp;
        }
        else
            matrice_key[i] = 0;
    }
    if (type == 0)
        display_matrix_key(nb_col, matrice_key);
}

void make_matrix_decrypt(float *matrix_decrypt, char **str)
{
    int i = 0;
    char *tmp;

    while (*(*str) != '\0') {
        if (my_char_is_nb(*(*str)) == 1) {
            tmp = my_getnbr(*str);
            *str += my_strlen(tmp);
            matrix_decrypt[i] = atof(tmp);
            i++;
        }
        else
            *str += 1;
    }
    return;
}