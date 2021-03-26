/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** help.c
*/

#include "../lib/my.h"

void help(void)
{
    my_putstr("USAGE\n     ./my_sokoban map\nDESCRIPTION\n     map  file");
    my_putstr(" representing the warehouse map, containing '#' for walls,\n");
    my_putstr("\t  'P' for the player, 'X' for boxes and 'O' for storage ");
    my_putstr("locations.\n");
}