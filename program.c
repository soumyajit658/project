#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    
    for(i = 1; i <= 120; i++) {
        printf("I LOVE YOU N3\n");
        usleep(300000); // 300 milliseconds
    }

    return 0;
}