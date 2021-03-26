/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** mapsize.c
*/

#include "../lib/my.h"

int columnnbr(char *str)
{
    int i = 0;
    char c;
    int fd = open(str, O_RDONLY);

    if (fd == -1)
        return (84);
    while (read(fd, &c, 1) != -1) {
        i++;
        if (c == '\n') {
            close(fd);
            return (i);
        }
    }
    close(fd);
}

int mapsize(char *str)
{
    int size = 0;
    int ccount = columnnbr(str);
    struct stat buf;
    char c;
    int fd = open(str, O_RDONLY);

    stat(str, &buf);
    for (int j = 0; j <= buf.st_size; j++) {
        if (c == '\n')
            size++;
        read(fd, &c, 1);
    }
    close(fd);
    size++;
    return (size);
}

char *mapmalloc(char *str)
{
    int column = columnnbr(str);
    int line = mapsize(str);
    int size = (column * line) - 1;
    char *map = malloc(sizeof(char) * size + 1);
    char c;
    int fd = open(str, O_RDONLY);
    int i = 0;

    map[size - 1] = '\0';
    while (i < size) {
        read(fd, &c, 1);
        map[i] = c;
        i++;
    }
    close(fd);
    return (map);
}