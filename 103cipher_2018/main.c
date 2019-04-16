/*
** EPITECH PROJECT, 2018
** Project 103cipher
** File description:
** crypt using matrix
*/

#include "include/my.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void calcul_maker(float *matrix_crypt, float *matrice_key, int size, int tmp)
{
    if (size == 1)
        calcul_matrix_crypt1(tmp, matrix_crypt, matrice_key, tmp*size);
    if (size == 2)
        calcul_matrix_crypt2(tmp, matrix_crypt, matrice_key, tmp*size);
    if (size == 3)
        calcul_matrix_crypt3(tmp, matrix_crypt, matrice_key, tmp*size);
    if (size == 4)
        calcul_matrix_crypt4(tmp, matrix_crypt, matrice_key, tmp*size);
}

void calcul_maker_decrypt(float *matrix_d, float *m_k, int size, int tmp)
{
    if (size == 1)
        calcul_matrix_decrypt1(tmp, matrix_d, m_k, tmp*size);
    if (size == 2)
        calcul_matrix_decrypt2(tmp, matrix_d, m_k, tmp*size);
    if (size == 3)
        calcul_matrix_decrypt3(tmp, matrix_d, m_k, tmp*size);
    if (size == 4)
        calcul_matrix_decrypt4(tmp, matrix_d, m_k, tmp*size);
}

void inverse_maker(float *matrix, int nb_col)
{
    if (nb_col == 1)
        invert_1(matrix, nb_col);
    if (nb_col == 2)
        invert_2(matrix, nb_col);
    if (nb_col == 3)
        invert_3(matrix, nb_col);
    if (nb_col == 4)
        invert_4(matrix, nb_col);
}

int nb_line_finder(char *str, int type)
{
    if (type == 0)
        return (my_strlen(str));
    if (type == 1)
        return (nb_space(str));
}

int main(int ac, char **av)
{
    error(ac, av);
    float nb_line_crypt = nb_line_finder(av[1], atoi(av[3]));
    int nb_col = find_size_matrix_key(my_strlen(av[2]));
    nb_line_crypt = ceil(nb_line_crypt/nb_col);
    int tmp = nb_line_crypt;
    float matrix_key[nb_col*nb_col];

    if (atoi(av[3]) == 0) {
        float matrix_crypt[tmp * nb_col];
        make_matrix_key(av, matrix_key, nb_col, 0);
        make_matrix_crypt(av, nb_col*nb_line_crypt, matrix_crypt);
        printf("Encrypted message:\n");
        calcul_maker(matrix_crypt, matrix_key, nb_col, tmp);
    } else if (atoi(av[3]) == 1) {
        float matrix_decrypt[tmp * nb_col];
        make_matrix_key(av, matrix_key, nb_col, 1);
        make_matrix_decrypt(matrix_decrypt, &av[1]);
        inverse_maker(matrix_key, nb_col);
        calcul_maker_decrypt(matrix_decrypt, matrix_key, nb_col, tmp);
    }
}