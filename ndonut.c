#include <math.h>
#include <stdio.h>
#include <time.h>


int main(){

    int x = 0;
    double y = 1.0;


    float R1 = 1;
    float R2 = 2;

    float theta;
    float phi;

    clock_t start = clock(), diff;
    //ProcessIntenseFunction();
    diff = clock() - start;

    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Time taken %d seconds %d milliseconds", msec/1000, msec%1000);

}