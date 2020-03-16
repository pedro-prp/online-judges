#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int x, s = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        s += x;
    }

    printf("%d\n", s);

    return 0;
}