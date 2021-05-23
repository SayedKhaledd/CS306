//
// Created by seka5 on 4/25/2021.
//


#include <stdio.h>
#include <stdlib.h>

struct user {
    int id;
    char name[20];
    char address[20];
    char department[20];

};

int main(int argc, char *arg[]) {

    struct user u;


    printf("enter id, name, address, department\n");

    scanf("%d %s %s %s", &u.id, &u.name, &u.address, &u.department);


    printf("your id is %d \nyour name is %s\n", u.id, u.name);

    printf("your address is %s\n", u.address);
    printf("your department is %s", u.department);

    return 0;
}


