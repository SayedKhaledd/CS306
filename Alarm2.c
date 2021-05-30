//
// Created by seka5 on 5/30/2021.
//
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void alarmHandlder();

int alarmFlag = 0;

void main() {
    signal(SIGALRM, alarmFlag);

    alarm(5);
    printf("looping\n");

    while (!alarmFlag) {
        pause();
    }
    printf("looping ends due to alarm signal\n");

}

void alarmHandler() {
    printf("an alarm signal was recevied");
    alarmFlag = 1;

}