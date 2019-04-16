/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** crypt with matrix
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

void disp_char_decrypt(float *matrice, int len_size);

void calcul_matrix_decrypt1(int nb_line, float *m1, float *m2, int len)
{
    float m3[len];
    int c_l = 0;
    int c_i = 0;

    for (int i = 0; i < nb_line; i++) {
        m3[i] = m1[i]*m2[0];
    }
    disp_char_decrypt(m3, len);
}

void calcul_matrix_decrypt2(int nb_line, float *m1, float *m2, int len)
{
    float m3[len];
    int c_l = 0;
    int c_i = 0;

    for (int i = 0; i < nb_line; i++) {
        for (int j = 0; j < 2; j++) {
            m3[c_i] = m1[c_l]*m2[j] + m1[c_l+1]*m2[j+2];
            c_i++;
        }
        c_l+=2;
    }
    disp_char_decrypt(m3, len);
}

void calcul_matrix_decrypt3(int nb_line, float *m1, float *m2, int len)
{
    float m3[len];
    int c_l = 0;
    int c_i = 0;

    for (int i = 0; i < nb_line; i++) {
        for (int j = 0; j < 3; j++) {
            m3[c_i] = m1[c_l]*m2[j] + m1[c_l+1]*m2[j+3] + m1[c_l+2]*m2[j+6];
            c_i++;
        }
        c_l+=3;
    }
    disp_char_decrypt(m3, len);
}

void calcul_matrix_decrypt4(int nb_line, float *m1, float *m2, int len)
{
    float m3[len];
    int c_l = 0;
    int c_i = 0;

    for (int i = 0; i < nb_line; i++) {
        for (int j = 0; j < 4; j++) {
            m3[c_i] = m1[c_l]*m2[j] + m1[c_l+1]*m2[j+4]
            + m1[c_l+2]*m2[j+8] + m1[c_l+3]*m2[j+12];
            c_i++;
        }
        c_l+=4;
    }
    disp_char_decrypt(m3, len);
}