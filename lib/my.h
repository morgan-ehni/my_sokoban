/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>

typedef struct {
    int a;
    int b;
    int c;
    int d;
    int e;
}positions;

void my_putchar(char c);
void my_putstr(char *str);
void help(void);
int columnnbr(char *str);
int mapsize(char *str);
char *mapmalloc(char *str);
char *fillmap(char *str);
void wincreate(char *map, char *name);
void winrecreate(char *map2, char *name);
int posp(char *map);
void keyaction(int key, char *map, char *name);
void moveup(char *map, char *name);
void movedown(char *map, char *name);
void moveleft(char *map);
void moveright(char *map);
positions opos(char *map);
char *odisplay(char *map, positions points);
int win(char *map, char *name);
void message(void);
int check(char *map);