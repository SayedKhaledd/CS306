//
// Created by seka5 on 5/30/2021.
//

#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main(){
int(*oldHandler)();
printf("I can control-C'ed\n");
sleep(5);
    oldHandler=signal(SIGINT,SIG_IGN);
    printf("I am PROTECTED FROM CONTROL-C NOW!!!!!!!!!!\n");
    sleep(5);
    signal(SIGINT,oldHandler);
    printf("i can be control-c again\n");
    sleep(5);
    printf("bye\n");
    return 0;

}