//
//  main.c
//  C-lang
//
//  Created by P0ngCh4ng on 2021/01/09.
//

#include <stdio.h>
#include "Session1.h"
int main() {
    int i;
    int a[20] = {35,25,56,78,43,66,71,73,80,90,0,73,35,65,100,78,80,85,35,50};
    int b[11] = {0,0,0,0,0,0,0,0,0,0,0};
    hist(a,b);
    for( i = 0; i<=10;i++ )
    printf("%d - %d\n",i*10,b[i]);
    return 0;
}
