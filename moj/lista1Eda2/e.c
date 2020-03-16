#include <stdio.h>
#include <stdlib.h>

int main(){

    int v[10001];
    int x, l, sz = 0, s = 0, p, f = 0;

    for(int i = 0; scanf("%d", &x) == 1 && x != 0; i++){
        v[i] = x;
        sz++;
    }
    scanf("%d", &l);

    while (sz > 0){
        for(int i = 0; i < sz; i++){
            s += v[i];
            if(s > l){
                p = i;
                s = 0;
                f = 1;
            }
        }

        if(sz == p || f == 0)
            break;

        printf("%d\n", v[p]);
        sz = p;
        s = 0;
    }



    return 0;
}