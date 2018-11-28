#include<stdio.h>
#include<stdlib.h>
int main(){
    char* str = (char*)malloc(sizeof(char)*100);
    char* p;

    p = str;
    printf("文字列を入力して下さい： ");
    scanf("%s",str);

    //*p = *str;
    printf("%p",p);
    while(*p != '\0'){
        printf("%c",*p);
        p++;
    }
    printf("\n%p\n",p);
    while(p >= str){
        printf("%c",*p);
        p--;
    }
    printf("\n");
    //int len = strLength(*str)
}

//int strLength(char *str) {
    //int n = 0;
    //while( *str != '\0'){
        //str++;
        //n++;
    //}
    //return n;
//}
