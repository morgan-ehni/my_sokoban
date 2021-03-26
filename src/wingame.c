/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** wingame.c
*/

#include "../lib/my.h"

int win(char *map, char *name)
{
    int i = 0;
    int j = 0;

    while (map[i] != '\0') {
        if (map[i] == 'O')
            j++;
        i++;
    }
    if (j == 0)
        return (1);
    else
        return (0);
}

void message(void)
{
    endwin();
    my_putstr("you win !");
}