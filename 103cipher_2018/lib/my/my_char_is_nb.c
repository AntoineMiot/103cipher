/*
** EPITECH PROJECT, 2018
** str cpy
** File description:
** desc
*/

int my_char_is_nb(char x)
{
    if (x >= '0' && x <= '9' || x == '-')
        return (1);
    return (0);
}