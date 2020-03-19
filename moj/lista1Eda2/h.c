#include <stdio.h>

int check_less(int * list, int v, int size){
    int less = v;
    for(int i = 0; i < size; i++){
        if(list[i] < less)
            less = list[i];
    }

    return (less == v)? 1 : 0;
}

int main(){


    int b[100];
    int x = 0, size = 0;

    for(int i = 0; scanf("%d", &x) == 1 && x != 0; i++){
        b[i] = x;
        size++;
    }
    
    printf("%d\n", check_less(b,1, size));



    return 0;
}