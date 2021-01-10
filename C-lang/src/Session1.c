//
//  Session1.c
//  C-lang
//
//  Created by P0ngCh4ng on 2021/01/09.
//

#include "Session1.h"

long combi (int n, int r){
    if (r == 0)
        return 1;
    return combi( n,r-1) * (n-r+1)/r;
}

long horner( double x, double* a, int n){
    if (n == 0 )
        return a[n];
    return  horner(x, a,n-1)* x + a[n];
}
void hist(int* a,int* b){
    int i;
    for (i = 0; i<= 19; i++)
        b[a[i]/10] +=1;
}
