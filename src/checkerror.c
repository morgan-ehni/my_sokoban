/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** checkerror.c
*/

#include "../lib/my.h"

int check(char *map)
{
    int i = 0;

    while (map[i] != '\0') {
        if (map[i] != '#' && map[i] != ' ' && map[i] != 'O' && map[i] != 'X'
            && map[i] != 'P' && map[i] != '\n')
            return (0);
        i++;
    }
    return (1);
}