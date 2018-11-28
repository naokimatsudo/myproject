#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 0;
    int* pa; //ポインタを宣言
    int** pp; //ポインタのポインタを宣言

    pa = &a; //ここでポインタにアドレスを代入
    printf("%p\n",pa);
    pp = &pa; //ポインタのアドレスを代入
    printf("%p\n",pp);
   // printf("%d",pp);
    printf("%d\n",**pp);
    **pp = 1; //ppのアドレスに1を代入、つまりaに1を代入する事と同じ
    printf("%d\n",a);
    printf("%d\n",**pp);
    return 0;
}