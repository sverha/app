#include <stdio.h>

int height=0;
void pyramid(int v);

int main(void)
{
    do{
        printf("height:");
        scanf("%d",&height);

    }while(height<1 || height >8);

    pyramid(height);
}

void pyramid(int v){
    int x= 1;
    int odpocet=0, j=0, k=0, a=0, has=0;

    while(v > odpocet){
        while(x < (v-a)){
            printf(" ");
            x++;
        }
         has= v-(x-1);
        for(j=0; j<has; j++){
            printf("#");
        }
        printf("  ");
        for(k=0;k<has;k++){
            printf("#");
        }
        printf("\n");
        j=k=has=0;
        x=1;
        odpocet++;
        a++;

    }
}