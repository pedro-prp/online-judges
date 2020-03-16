#include <stdio.h>
#include <string.h>

typedef struct list {
    char city[26];
    struct list * n;        
} l;

l ** insert(l *list, l *tail, char *city){
    l * new = (l *) malloc(sizeof(l));
    strcpy(new->city, city);
    
    tail->n = new;
    tail = new;
    
    l ** r = (l **) malloc(sizeof(l *));
    r[0] = list;
    r[1] = tail;

    return r;
}

l * order(l * list, l * tail){
    char last = list->city[(strlen(list->city)-1)];

    l * it;
    l ** r;

    for(it = list; it->n != NULL; it = it->n){
        if(tolower(it->n->city[0]) == last){
            r = insert(list, tail, it->n->city);
            list = r[0];
            tail = r[1];

            it->n = it->n->n;

        }
        printf("%s\n", it->city);

        last = it->n->city[strlen(it->n->city)-1];
    }

    printf("%s\n", it->city);

    return list;
}

int main(){

    char t[26];
    int s = 0;
    l * list = (l *) malloc(sizeof(l));
    l * tail;
    l ** r;

    while (scanf("%s", &t) == 1){
        if(s == 0){
            strcpy(list->city, t);
            tail = list;
            s++;
        }else{
            r = insert(list, tail,t);
            list = r[0];
            tail = r[1];
        }
    }

    list = order(list, tail);

    return 0;
}