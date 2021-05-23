
#include <time.h>
#include <stdio.h>

#include <stdlib.h>
#define row 3
#define col 3
#ifdef _WIN32
#define s "F:\\t2.txt"
#else
#define s "t.txt"
#endif

int main() {
    time_t t;
    int arr[row][col];
    srand((unsigned) time(&t));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % 10;
        }
    }

//opening the file
    FILE *open;
    open = fopen(s, "w");
//print to file the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            fprintf(open, "%d ", arr[i][j]);

        }
        fprintf(open, "\n");
    }

    //printing sums
    int sum = 0;
    for (int i = 0; i < row; i++) {
        sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        fprintf(open, "sum = %d", sum);
    }

    fclose(open);
    return 0;

}
