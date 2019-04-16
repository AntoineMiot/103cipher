/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103cipher
*/

#include "include/my.h"
#include <stdio.h>
#include <math.h>

void invert_4_four(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[4] = - matrice1[ 4] * matrice1[10] * matrice1[15]
    + matrice1[4] * matrice1[11] * matrice1[14] + matrice1[8]
    * matrice1[6] * matrice1[15] - matrice1[8] * matrice1[7]
    * matrice1[14] - matrice1[12] * matrice1[6] * matrice1[11]
    + matrice1[12] * matrice1[ 7] * matrice1[10];
}

void invert_4_three(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[3] = - matrice1[1] * matrice1[6] * matrice1[11] + matrice1[1]
    * matrice1[7] * matrice1[10] + matrice1[5] * matrice1[2] * matrice1[11]
    - matrice1[5] * matrice1[3] * matrice1[10] - matrice1[9] * matrice1[2]
    * matrice1[7] + matrice1[9] * matrice1[3] * matrice1[6];
}

void invert_4_two(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[2] = + matrice1[1] * matrice1[6] * matrice1[15] - matrice1[1]
    * matrice1[7] * matrice1[14] - matrice1[5] * matrice1[2] * matrice1[15]
    + matrice1[5] * matrice1[3] * matrice1[14] + matrice1[13] * matrice1[2]
    * matrice1[7] - matrice1[13] * matrice1[3] * matrice1[6];
}

void invert_4_one(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[1] = - matrice1[1] * matrice1[10] * matrice1[15]
    + matrice1[1] * matrice1[11] * matrice1[14] + matrice1[9] * matrice1[2]
    * matrice1[15] - matrice1[9] * matrice1[3] * matrice1[14] - matrice1[13]
    * matrice1[2] * matrice1[11] + matrice1[13] * matrice1[3] * matrice1[10];
}

void invert_4_zero(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[0] = + matrice1[5] * matrice1[10] * matrice1[15] - matrice1[5]
    * matrice1[11] * matrice1[14] - matrice1[9] * matrice1[6] * matrice1[15]
    + matrice1[9] * matrice1[7] * matrice1[14] + matrice1[13] * matrice1[6]
    * matrice1[11] - matrice1[13] * matrice1[7] * matrice1[10];
}