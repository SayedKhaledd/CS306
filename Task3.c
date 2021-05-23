
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *arg[]) {
    if (argc == 3) {
        printf("please enter 3 numbers");
        exit(1);
    }

    int a = atoi(arg[1]);
    int b = atoi(arg[2]);
    int c = atoi(arg[3]);

    if (a <= b && a <= c) {
          if (b <= c) {
              printf("%d %d %d", a, b, c);
          } else {
              printf("%d %d %d", a, c, b);

          }
      }
      else if (b <= a && b <= c) {
          if (a <= c) {
              printf("%d %d %d", b, a, c);
          } else {
              printf("%d %d %d", b, c, a);

          }
      }
      else if (c <= a && c <= b) {
          if (b <= a){
              printf("%d %d %d", c, b, a);
          } else {
              printf("%d %d %d", c, a, b);

          }
      }




    return 0;
}


