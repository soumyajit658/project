#include <stdio.h>
#include <unistd.h>

void main() {
    int i;
    
    for(i = 1; i <= 120; i++) {
        printf("I LOVE YOU N3\n");
        usleep(300000); 
    }

}