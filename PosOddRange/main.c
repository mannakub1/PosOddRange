//
//  main.c
//  PosOddRange
//
//  Created by SunDay on 9/29/2559 BE.
//  Copyright © 2559 Silpakorn. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main() {
    
    int min = INT_MAX, max = INT_MIN;
    int number = 0;
    
    while(1) {
        scanf("%d", &number);
        if( isBreak(number) ) {
            break;
        }
    }
    return 0;
}

int isBreak(int number) {
    if( number <= 0){
        return 1;
    }
    
    return 0;
}