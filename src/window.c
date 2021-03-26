/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** window.c
*/

#include "../lib/my.h"

void wincreate(char *map, char *name)
{
    WINDOW *game;
    positions opoints = opos(mapmalloc(name));
    int key;
    int pp = posp(map);

    initscr();
    keypad(stdscr, TRUE);
    noecho();
    while (42) {
        clear();
        map = odisplay(map, opoints);
        printw(map);
        if (win(map, name) == 1)
            message();
        refresh();
        key = getch();
        keyaction(key, map, name);
    }
    endwin();
    free(game);
}

void winrecreate(char *map2, char *name)
{
    WINDOW *game;
    positions opoints = opos(mapmalloc(name));
    int key;
    int pp = posp(map2);

    initscr();
    keypad(stdscr, TRUE);
    noecho();
    while (42) {
        clear();
        map2 = odisplay(map2, opoints);
        printw(map2);
        if (win(map2, name) == 1)
            message();
        refresh();
        key = getch();
        keyaction(key, map2, name);
    }
    endwin();
    free(game);
}

void keyaction(int key, char *map, char *name)
{
    if (key == 27) {
        endwin();
        exit(0);
    }
    if (key == 32)
        winrecreate(mapmalloc(name), name);
    if (key == KEY_UP)
        moveup(map, name);
    if (key == KEY_DOWN)
        movedown(map, name);
    if (key == KEY_LEFT)
        moveleft(map);
    if (key == KEY_RIGHT)
        moveright(map);
}
