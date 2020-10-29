//
//  main.cpp
//  Laba22
//
//  Created by Мишаня on 29.10.2020.
//  Copyright © 2020 m1xxos. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    int x, pid;
    x=5;
    printf("Standart, x = %d\n",x);
    x++;
    printf("after ++, x = %d\n",x);
    pid=fork();
    if (pid == 0){
        printf("\nChild 1, x = %d\n",x);
        x-=3;
        printf("Child 2, x = %d\n",x); // Потомок
    }
    else if(pid > 0){ // Родитель
        printf("\nParent 1, x = %d, pid = %d\n",x,pid);
        x+=2;
        printf("Parent 2, x = %d\n",x);
        sleep(5);
        waitpid(pid, NULL, NULL);
    }
    else {
        perror("Fork error ");
        return -1;
    }
    
return 0;
}
