#include <stdio.h>
#include <stdlib.h>

int main(){
    int* p = (int*)malloc(sizeof(int)*5);
    int* q = p;
    printf("整数値を5個入力してください。一つ入力するごとに改行を押してください。：\n");
    for(int  i = 0; i < 5; i++){
      scanf("%d", p);
      p++;
    }
    p = q;
    printf("配列の中身は以下の通りです。\n");
    for(int i = 0; i < 5; i++){
      printf("値：%d アドレス：%p\n\n", *p, p);
      p++;
    }
    
}