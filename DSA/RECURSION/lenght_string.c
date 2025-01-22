#include <stdio.h>
#include "string.h"
int lenght(char *str,int i){
if(str[i]=='\0'){
    return 0;
}
else return 1+lenght(str,i+1);
}
int main(){
    char s[10];
    printf("enter string:");
    fgets(s,10,stdin);
    s[strcspn(s,"\n")]='\0';
    int res=lenght(s,0);
    printf("%d is lenght",res);
}