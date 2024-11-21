#include <stdio.h>
#include <string.h>
int main(){
        char e[20];
        e[0]='J';
        e[1]='o';
        e[2]='h';
        e[3]='y';
        e[4]='\0';
        printf("%s\n",e);
        for(int i=0;i<4;i++){
            printf("%c",e[i]);
        }
        printf("\n");

        char c[ ]="John";
        printf("%s",c);
        printf("%d\n",sizeof(c));
        int len = strlen(c);
        printf("Length=%d\n",len);
        char d[5]={'J','O','H','N','\0'};
        printf("%s",d);

    return 0;
}