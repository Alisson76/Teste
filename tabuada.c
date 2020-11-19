#include <stdio.h>
#include <stdbool.h>

char vdeseja='s';
int vnum=0;

int main() {
    printf("\nPrograma que calcula a tabuada do número digitado\n");
    while(true){
        printf("\nentre com o número desejado\n");
        scanf("\n%i", &vnum);
        printf("\n");
        for (int i=1; i<=10; i++){
            printf("%i X %i = %i\n", vnum, i, (vnum*i));
        }
        printf("\ndeseja continuar?\n");
        printf("\ns/n?\n");
        scanf("\n%c", &vdeseja);
        if (vdeseja == 's' || vdeseja == 'S'){
            continue;
        }else{
            break;
        }
    }
    return 0;
}
