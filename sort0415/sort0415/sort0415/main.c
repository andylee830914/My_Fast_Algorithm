//
//  main.c
//  midterm
//
//  Created by Yu Hsun Lee on 2015/4/15.
//  Copyright (c) 2015年 Yu Hsun Lee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int i,j,N, *v,swap;
    //time_t T=1;
    
    //Create N Random int
    srand(time(0));
    N=10;
    v=(int *) malloc(N *sizeof(int));
    printf("ori   ");
    for(i=0;i<N;++i){
        v[i]=rand() % 100;
        printf("%d,",v[i]);
    }
    
    //Bubble sort
    for (j=1; j<N; ++j) {
        
        for (i=0; i<N-j; ++i) {
            if (v[i]>v[i+1]) {
                swap=v[i];
                v[i]=v[i+1];
                v[i+1]=swap;
            }
        }
        printf("\nsort%d ",j);
        for(i=0;i<N;++i){
            printf("%d,",v[i]);
        }
        
    }
    
    
    return 0;
}
