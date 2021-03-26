/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** main.c
*/

#include "../lib/my.h"

int main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    if (ac == 2 && open(av[1], O_RDONLY) == -1 && av[1][0] != '-')
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help();
    if (ac == 2 && av[1][0] != '-') {
        if (check(mapmalloc(av[1])) == 0)
            return (84);
        char *map = mapmalloc(av[1]);
        wincreate(map, av[1]);
    }
    return (0);
}