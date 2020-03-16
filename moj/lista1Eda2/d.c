#include <stdio.h>
#include <string.h>

int main(){
    int l;

    scanf("%d", &l);

    char text[l][1001];

    for(int i = 0; i < l; i++){
        scanf(" %[^\n]", text[i]);
    }


    int line, col, len, acol;
    scanf("%d %d", &line, &col);

    char c, carac;
    while (scanf(" %c", &c) == 1){

        if(c == 'j'){
            if(line != l){
                line++;
            }
        } else{
            if(line != 1){
                line--;
            }
        }

        len = strlen(text[line-1]);
        acol = (len < col) ? len : col;
        carac = text[line-1][acol-1];

        printf("%d %d %c\n", line, acol, carac);
    }
    
    return 0;
}
