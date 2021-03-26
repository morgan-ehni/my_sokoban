/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** count.c
*/

#include "../lib/my.h"

positions opos(char *map)
{
    positions points;
    int array[5] = {0, 0, 0, 0, 0};
    int j = 0;

    for (int i = 0; map[i] != '\0'; i++)
        if (map[i] == 'O') {
            array[j] = i;
            j++;
        }
    points.a = array[0];
    points.b = array[1];
    points.c = array[2];
    points.d = array[3];
    points.e = array[4];
    return (points);
}

char *odisplay(char *map, positions points)
{
    if (map[points.a] == ' ')
        map[points.a] = 'O';
    if (map[points.b] == ' ')
        map[points.b] = 'O';
    if (map[points.c] == ' ')
        map[points.c] = 'O';
    if (map[points.d] == ' ')
        map[points.d] = 'O';
    if (map[points.e] == ' ')
        map[points.e] = 'O';
    return (map);
}