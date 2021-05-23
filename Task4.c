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

void readData(FILE *, int **);

void printTotals(int **);

int main() {

    FILE *open;
    open = fopen(s, "r");
    int **arr = (int **) malloc(7 * sizeof(int));
    for (int i = 0; i < 7; i++) {
        arr[i] = (int *) malloc(7 * sizeof(int));
    }

    readData(open, arr);
    printTotals(arr);
    fclose(open);


    return 0;

}

void readData(FILE *open, int **arr) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            fscanf(open, "%d", &arr[i][j]);

        }
    }
}

void printTotals(int **arr) {
    for (int i = 0; i < 7; i++) {
        long long sum = 0;

        for (int j = 0; j < 7; j++) {
            sum += arr[i][j];

        }
        printf("number of students in college %d is %lld\n", i+1,sum);
    }
    for (int i = 0; i < 7; i++) {
        long long sum = 0;

        for (int j = 0; j < 7; j++) {
            sum += arr[j][i];

        }
        printf("number of students in year %d is %lld\n", 2000+i,sum);
    }
}
