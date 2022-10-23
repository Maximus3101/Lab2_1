#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{

    double x, y;
    printf("Enter x:");
    scanf("%lf", &x);

    if(x>=0 && x<4) {
      y =(2*x -1)/(3*x+1);
    }
    else if (x>=4 && x<12) {
      y =5*x+10;
    }
    else if (x>=15 && x<55) {
      y =(2*x/sqrt(-x+pow(2*x,2))-pow(3*x,2));
    }
    else {
        y =2-(x/10);
    }

    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);


    return 0;
}




