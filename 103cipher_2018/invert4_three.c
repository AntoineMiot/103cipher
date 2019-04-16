/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103cipher
*/

#include "include/my.h"
#include <stdio.h>
#include <math.h>

void invert_4_fourteen(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[14] = - matrice1[0] * matrice1[5] * matrice1[14]
    + matrice1[0] * matrice1[6] * matrice1[13] + matrice1[4] * matrice1[1]
    * matrice1[14] - matrice1[4] * matrice1[2] * matrice1[13] - matrice1[12]
    * matrice1[1] * matrice1[6] + matrice1[12] * matrice1[2] * matrice1[5];
}

void invert_4_thirteen(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[13] = + matrice1[0] * matrice1[9] * matrice1[14]
    - matrice1[0] * matrice1[10] * matrice1[13] - matrice1[8]
    * matrice1[1] * matrice1[14] + matrice1[8] * matrice1[2]
    * matrice1[13] + matrice1[12] * matrice1[1] * matrice1[10]
    - matrice1[12] * matrice1[2] * matrice1[9];
}

void invert_4_twelve(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[12] = - matrice1[4] * matrice1[9] * matrice1[14]
    + matrice1[4] * matrice1[10] * matrice1[13] + matrice1[8]
    * matrice1[5] * matrice1[14] - matrice1[8] * matrice1[ 6] * matrice1[13]
    - matrice1[12] * matrice1[ 5] * matrice1[10] + matrice1[12] * matrice1[ 6]
    * matrice1[ 9];
}

void invert_4_eleven(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[11] = - matrice1[0] * matrice1[5] * matrice1[11]
    + matrice1[0] * matrice1[7] * matrice1[9] + matrice1[4] * matrice1[1]
    * matrice1[11] - matrice1[4] * matrice1[3] * matrice1[9]- matrice1[8]
    * matrice1[1] * matrice1[7] + matrice1[8] * matrice1[3] * matrice1[5];
}

void invert_4_ten(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[10] = + matrice1[ 0] * matrice1[ 5] * matrice1[15]
    - matrice1[0] * matrice1[7] * matrice1[13] - matrice1[4] * matrice1[1]
    * matrice1[15] + matrice1[4] * matrice1[3] * matrice1[13] + matrice1[12]
    * matrice1[1] * matrice1[7] - matrice1[12] * matrice1[3] * matrice1[5];
}