/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** positions.c
*/

#include "../lib/my.h"

int posp(char *map)
{
    int i = 0;

    while (map[i] != 'P')
        i++;
    return (i);
}