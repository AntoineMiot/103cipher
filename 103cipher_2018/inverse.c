/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** 103 inverse
*/

#include "include/my.h"
#include <stdlib.h>

void display_reverse_key(int size, float *matrix);

void invert_1(float *m_r, int nb_col)
{
    float deter;

    deter = 1/(m_r[0]);
    if (deter == 0)
        exit(84);
    m_r[0] = deter;
    display_reverse_key(nb_col, m_r);
}

void invert_2(float *m_r, int nb_col)
{
    float deter;
    float tmp[4];

    tmp[0] = m_r[3];
    tmp[1] = -m_r[1];
    tmp[2] = -m_r[2];
    tmp[3] = m_r[0];

    deter = 1/(m_r[0] * tmp[0] + m_r[1] * tmp[2]);
    if (deter == 0)
        exit(84);
    for (int i = 0; i < 4; i++)
        m_r[i] = tmp[i] * deter;
    display_reverse_key(nb_col, m_r);
}

void invert_3(float *m_r, int nb_col)
{
    float deter;
    float tmp[9];

    tmp[0] = m_r[4] * m_r[8] - m_r[5] * m_r[7];
    tmp[1] = -m_r[1] * m_r[8] + m_r[2] * m_r[7];
    tmp[2] = m_r[1] * m_r[5] - m_r[2] * m_r[4];
    tmp[3] = -m_r[3] * m_r[8] + m_r[5] * m_r[6];
    tmp[4] = m_r[0] * m_r[8] - m_r[2] * m_r[6];
    tmp[5] = -m_r[0] * m_r[5] + m_r[2] * m_r[3];
    tmp[6] = m_r[3] * m_r[7] - m_r[4] * m_r[6];
    tmp[7] = -m_r[0] * m_r[7] + m_r[1] * m_r[6];
    tmp[8] = m_r[0] * m_r[4] - m_r[1] * m_r[3];

    deter = 1/(m_r[0] * tmp[0] + m_r[1] * tmp[3] + m_r[2] * tmp[6]);
    if (deter == 0)
        exit(84);
    for (int i = 0; i < 9; i++)
        m_r[i] = tmp[i] * deter;
    display_reverse_key(nb_col, m_r);
}

void invert_4(float *m2, int nb_col)
{
    struct inv_matrice inv;
    float determ;

    distrib_invert4(&inv, m2);
    determ = + m2[0] * inv.matrice6[0] + m2[1] * inv.matrice6[4]
    + m2[2] * inv.matrice6[8] + m2[3] * inv.matrice6[12];
    determ = 1 / determ;

    for (int i = 0; i != 16; i++)
        m2[i] = inv.matrice6[i] * determ;
    display_reverse_key(nb_col, m2);
}