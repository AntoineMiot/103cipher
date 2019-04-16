/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103cipher
*/

#include "include/my.h"
#include <stdio.h>
#include <math.h>

void invert_4_nine(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[9] = - matrice1[0] * matrice1[9] * matrice1[15]
    + matrice1[0] * matrice1[11] * matrice1[13] + matrice1[8]* matrice1[1]
    * matrice1[15] - matrice1[8] * matrice1[3] * matrice1[13] - matrice1[12]
    * matrice1[1] * matrice1[11] + matrice1[12] * matrice1[3] * matrice1[9];
}

void invert_4_eight(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[8] = + matrice1[4] * matrice1[9] * matrice1[15]
    - matrice1[4] * matrice1[11] * matrice1[13] - matrice1[8] * matrice1[5]
    * matrice1[15] + matrice1[8] * matrice1[7] * matrice1[13] + matrice1[12]
    * matrice1[5] * matrice1[11] - matrice1[12] * matrice1[7] * matrice1[9];
}

void invert_4_seven(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[7] = + matrice1[0] * matrice1[6] * matrice1[11]
    - matrice1[0] * matrice1[7] * matrice1[10] - matrice1[4] * matrice1[2]
    * matrice1[11] + matrice1[4] * matrice1[3] * matrice1[10] + matrice1[8]
    * matrice1[2] * matrice1[7] - matrice1[8] * matrice1[3] * matrice1[6];
}

void invert_4_six(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[6] = - matrice1[0] * matrice1[ 6] * matrice1[15]
    + matrice1[0] * matrice1[7] * matrice1[14] + matrice1[4]
    * matrice1[2] * matrice1[15] - matrice1[4] * matrice1[3] * matrice1[14]
    - matrice1[12] * matrice1[2] * matrice1[7] + matrice1[12] * matrice1[3]
    * matrice1[6];
}

void invert_4_five(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[5] = + matrice1[ 0] * matrice1[10] * matrice1[15]
    - matrice1[0] * matrice1[11] * matrice1[14] - matrice1[8] * matrice1[2]
    * matrice1[15] + matrice1[8] * matrice1[3] * matrice1[14] + matrice1[12]
    * matrice1[2] * matrice1[11] - matrice1[12] * matrice1[3] * matrice1[10];
}