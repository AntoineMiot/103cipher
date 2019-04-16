/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** Error
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

void verif(char **av)
{
    if (my_str_isprintable(av[1]) == 0)
        exit(84);
    if (my_str_isprintable(av[2]) == 0)
        exit(84);
    if (av[3][0] != '0' && av[3][0] != '1')
        exit(84);
}

void error(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        printf("USAGE\n");
        printf("	./103cipher message key flag\n\n");
        printf("DESCRIPTION\n");
        printf("	message		a message, made of ASCII characters\n");
        printf("	key		the encryption key,");
        printf(" made of ASCII characters\n");
        printf("	flag		0 for the message to be encrypted,");
        printf(" 1 to be decrypted\n");
        exit(0);
    }
    if (ac != 4)
        exit(84);
    if (ac == 4)
        verif(av);
    return;
}