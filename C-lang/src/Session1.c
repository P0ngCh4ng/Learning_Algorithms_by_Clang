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
