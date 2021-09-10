#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "mm_ikj.c"
#include "mm_jik.c"
#include "mm_jki.c"
#include "mm_kij.c"
#include "mm_kji.c"
#include "mm_ijk.c"

#define n 1000

double A[n][n];
double B[n][n];
double C[n][n];

//not sure how to get all of these to run??
int main() {

main_ijk();
main_ikj();
main_jik();
main_jki();
main_kij();
main_kji();
    return 0;
}