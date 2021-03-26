/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** movements.c
*/

#include "../lib/my.h"

void moveup(char *map, char *name)
{
    int pos = posp(map);
    int larg = columnnbr(name);
    int new = pos - larg;

    if (map[new] == ' ' || map[new] == 'O') {
        map[pos] = ' ';
        map[new] = 'P';
    }
    if (map[new] == 'X' && map[new - larg] != '#') {
        map[pos] = ' ';
        map[new] = 'P';
        map[new - larg] = 'X';
    }
}

void movedown(char *map, char *name)
{
    int pos = posp(map);
    int larg = columnnbr(name);
    int new = pos + larg;

    if (map[new] == ' ' || map[new] == 'O') {
        map[pos] = ' ';
        map[new] = 'P';
    }
    if (map[new] == 'X' && map[new + larg] != '#') {
        map[pos] = ' ';
        map[new] = 'P';
        map[new + larg] = 'X';
    }
}

void moveleft(char *map)
{
    int pos = posp(map);

    if (map[pos - 1] == ' ' || map[pos - 1] == 'O') {
        map[pos] = ' ';
        map[pos - 1] = 'P';
    }
    if (map[pos - 1] == 'X' && map[pos - 2] != '#') {
        map[pos] = ' ';
        map[pos - 1] = 'P';
        map[pos - 2] = 'X';
    }
}

void moveright(char *map)
{
    int pos = posp(map);

    if (map[pos + 1] == ' ' || map[pos + 1] == 'O') {
        map[pos] = ' ';
        map[pos + 1] = 'P';
        erase();
    }
    if (map[pos + 1] == 'X' && map[pos + 2] != '#') {
        map[pos] = ' ';
        map[pos + 1] = 'P';
        map[pos + 2] = 'X';
    }
}