/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-mysokoban-morgan.ehni
** File description:
** my_putchar.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}