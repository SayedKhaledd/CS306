//
// Created by seka5 on 5/9/2021.
//

//
// Created by seka5 on 5/9/2021.
//


#include <time.h>
#include <stdio.h>

#include <stdlib.h>

#define row 3
#define col 3
#ifdef _WIN32
#define s "F:\\t.txt"
#else
#define s "t.txt"
#endif


int main() {

    char *answers = (char *) malloc(10 * sizeof(char));
    for(int i=0;i<10;i++){
        printf("your answer of question %d is:\nA B C D\n",i+1);
        scanf("%c",&answers[i]);
        char temp;
        scanf("%c",&temp);

    }
    char *solutions = (char *) malloc(10 * sizeof(char));


    printf("the solutions is:");
    for(int i=0;i<10;i++){
        scanf("%c", &solutions[i]);

    }
    int score=0;
    for(int i=0;i<10;i++){
        if(solutions[i]==answers[i])
            score++;

    }
    printf("\n%d",score);
    return 0;

}
