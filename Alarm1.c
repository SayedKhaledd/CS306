//
// Created by seka5 on 5/30/2021.
//
#include <stdio.h>
#include <unistd.h>

void main() {
    alarm(5);
printf("looping forever\n");
    while (1)
        printf("this line is forever\n");
}