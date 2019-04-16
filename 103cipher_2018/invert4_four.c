/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103cipher
*/

#include "include/my.h"
#include <stdio.h>
#include <math.h>

void invert_4_fifteen(inv_matrice *inv, float *matrice1)
{
    inv->matrice6[15] = + matrice1[0] * matrice1[5] * matrice1[10]
    - matrice1[0] * matrice1[6] * matrice1[9] - matrice1[4] * matrice1[1]
    * matrice1[10] + matrice1[4] * matrice1[2] * matrice1[9] + matrice1[8]
    * matrice1[1] * matrice1[6] - matrice1[8] * matrice1[2] * matrice1[5];
}

void distrib_invert4(inv_matrice *inv, float *matrice2)
{
    invert_4_zero(inv, matrice2);
    invert_4_one(inv, matrice2);
    invert_4_two(inv, matrice2);
    invert_4_three(inv, matrice2);
    invert_4_four(inv, matrice2);
    invert_4_five(inv, matrice2);
    invert_4_six(inv, matrice2);
    invert_4_seven(inv, matrice2);
    invert_4_eight(inv, matrice2);
    invert_4_nine(inv, matrice2);
    invert_4_ten(inv, matrice2);
    invert_4_eleven(inv, matrice2);
    invert_4_twelve(inv, matrice2);
    invert_4_thirteen(inv, matrice2);
    invert_4_fourteen(inv, matrice2);
    invert_4_fifteen(inv, matrice2);
}