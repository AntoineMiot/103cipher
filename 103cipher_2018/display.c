/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103cipher
*/

#include "include/my.h"
#include <stdio.h>
#include <math.h>

void display_reverse_key2(int j, int size, int k, float *matrix)
{
    if (j == size - 1)
        printf("%.3f\n", matrix[k]);
    else
        printf("%.3f	", matrix[k]);
    return;
}

void display_reverse_key(int size, float *matrix)
{
    int k = 0;

    printf("Key matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            display_reverse_key2(j, size, k, matrix);
            k++;
        }
    }
    printf("\n");
}

void disp_char_decrypt(float *matrix, int len_size)
{
    float tmp = 0;

    printf("Decrypted message:\n");
    for (int i = 0; i != len_size; i++) {
        tmp = round(matrix[i]);
        if (tmp != 0)
            putchar(tmp);
    }
    putchar('\n');
}

void display_matrix_key2(int j, int size, int k, float *matrix)
{
    if (j == size - 1)
        printf("%.0f\n", matrix[k]);
    else
        printf("%.0f	", matrix[k]);
    return;
}

void display_matrix_key(int size, float *matrix)
{
    int k = 0;

    printf("Key matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            display_matrix_key2(j, size, k, matrix);
            k++;
        }
    }
    printf("\n");
}