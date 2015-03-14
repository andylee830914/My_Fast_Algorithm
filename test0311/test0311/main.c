//
//  main.c
//  test0311
//
//  Created by Yu Hsun Lee on 2015/3/11.
//  Copyright (c) 2015年 Yu Hsun Lee. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    // insert code here...
    char name[50] ="Yu Hsun Lee";
    int i;
    //name be a char vector
    //name[1], name[2],...,name[49]
    //name[11]=\0 //end
    printf("Hello, World!\n");
    printf("%d\n",123);  // %d print a integer
    printf("%f\n",230.0+456.3232+3.14159);  //%f print float num
    printf("%.16f\n",cos(M_PI)); //use math.h
    printf("%s\n",name+3); //print from third item in array
    printf("%u\n",name+3); //print un-signed 
    printf("%u\n",name);
    printf("%c\n",name[10]); //print specific array
    for (i=0; i<50; ++i) {
        printf("%d:%c %u\n",i,name[i],name[i]);
    }
    return 123;
}
