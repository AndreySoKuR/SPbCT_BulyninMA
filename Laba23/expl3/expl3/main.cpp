//
//  main.cpp
//  expl3
//
//  Created by Мишаня on 12.11.2020.
//  Copyright © 2020 m1xxos. All rights reserved.
//

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define ONE_K (1024)
int main() {
    char *some_memory;
    int size_to_allocate = ONE_K;
    int megs_obtained = 0;
    int ks_obtained = 0;
    while (1) {
        for (ks_obtained = 0; ks_obtained < 1024; ks_obtained++)
        {
            some_memory = (char *)malloc(size_to_allocate);
            if (some_memory == NULL) exit(EXIT_FAILURE);
            sprintf(some_memory, "Hello World");
        }
        megs_obtained++;
        printf("Now allocated %d Megabytesn", megs_obtained);
        }
exit(EXIT_SUCCESS);
}
