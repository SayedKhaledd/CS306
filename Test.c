//
// Created by seka5 on 5/23/2021.
//

//
// Created by seka5 on 4/25/2021.
//


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *arg[]) {
    int pid=fork();

if(pid==0)
    printf("process number:%d\n",pid);
else{
    printf("process number:%d\n",pid);
    pid=fork();
    printf("process number:%d\n",pid);

}
    return 0;
}


