#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int v;
    struct list * n;        
} l;

l * insert(l *list, int v){
    l * new = (l *) malloc(sizeof(l));
    new->v = v;

    if(list == NULL){
        return new;
    } else if(list->n == NULL) {
        if(v <= list->v){
            new->n = list;
            return new;
        } else{
            list->n = new;
            return list;
        }
        
    }
    else{
        if(v <= list->v){
            new->n = list;
            return new;
        }

        l * it;
        for(it = list; it->n != NULL; it = it->n){
            if(v <= it->n->v){
                l * aux = it->n;
                it->n = new;
                new->n = aux;
                
                return list;
            }
        }

        it->n = new;
        return list;
    }

    return list;
}

int main(){
    int x;
    l * list = NULL;
    while (scanf("%d", &x) == 1){
        list = insert(list, x);
    }
    int s = 0;
    for (l* it = list; it != NULL; it = it->n){
        if(s == 0)
            printf("%d", it->v);
        else
            printf(" %d", it->v);
        s++;
    }
    if(s != 0)
        printf("\n");

    return 0;
}