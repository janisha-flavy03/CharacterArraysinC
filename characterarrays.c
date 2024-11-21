#include<stdio.h>
void fee(char c[] ){
   int i=0;
   while(c[i]!='\0'){
    printf("%c\n",c[i]);
    i++;
   }
}
int main(){
    char c[6]="Hello";
    char *c1;
    c1=c; 
    printf("%d\n",c);
    printf("%d\n",c1);
    printf("%c\n",c1[1]);
    printf("%c\n",*(c1+1));
    fee(c);
    printf(c);

}