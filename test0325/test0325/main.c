//
//  main.c
//  test0325
//
//  Created by Yu Hsun Lee on 2015/3/25.
//  Copyright (c) 2015年 Yu Hsun Lee. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    
    int i;
    double x[10],u[10];
    for (i=0; i<10; i=i+1) {
        x[i]=cos(2*i*M_PI/10);
        //printf("x[%d]=%f\n",i,x[i]);
    }
    for (i=0; i<8; ++i) {
        u[i]=(x[i]+x[i+1]+x[i+2])/3;
        //printf("u[%d]=%f\n",i,u[i]);
    }
    //children_problem(20);
    //youth_problem(20, 3);
    university_problem(200, 3);
    return 0;
}

int children_problem(int N){
    //printf("baby%d\n",N);
    int i;
    double x[N],u[N];
    for (i=0; i<N; i=i+1) {
        x[i]=cos(2*i*M_PI/N);
        //printf("x[%d]=%f\n",i,x[i]);
    }
    for (i=0; i<N-3; ++i) {
        u[i]=(x[i]+x[i+1]+x[i+2])/3;
        //printf("u[%d]=%f\n",i,u[i]);
    }
    return 0;

}
int youth_problem(int N,int K){
    printf("youth%d\n",N);
    int i,j,k;
    double x[N],u[N];
    for (i=0; i<=N; i=i+1) {
        x[i]=cos(2*i*M_PI/N);
        printf("x[%d]=%f\n",i,x[i]);
    }
    for (i=0; i<=N-3; ++i) {
        u[i]=x[i];
        for (j=1; j<k; j=j+1) {
            u[i]=u[i]+x[i+j];
        }
        u[i]=u[i]/k;
        //u[i]=(x[i]+x[i+1]+x[i+2])/3;
        //printf("u[%d]=%f\n",i,u[i]);
    }
    return 0;
    
}

int university_problem(int N,int K){
    printf("university%d\n",N);
    int i,j,k;
    double x[N],u[N];
    for (i=0; i<=N; i=i+1) {
        x[i]=cos(2*i*M_PI/N);
        printf("x[%d]=%f\n",i,x[i]);
    }
    i=0;
    u[i]=u[i];
    for (j=1; j<k; j=j+1) {
        u[i]=u[i]+x[i+j];
    }
    u[i]=u[i]/k;
    for (i=1; i<=N-3; ++i) {
        u[i]=u[i]+(x[K+i-1]-x[i-1])/K;

        //u[i]=(x[i]+x[i+1]+x[i+2])/3;
        //printf("u[%d]=%f\n",i,u[i]);
    }
        return 0;
    
}

