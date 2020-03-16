#include <stdio.h>

int main(){

    int x, c = 0;

    while (scanf("%d", &x) == 1){
        c++;
    }

    printf("%d\n", c);

    return 0;
}