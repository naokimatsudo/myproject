#include <stdio.h>
int main(){
    //*はポインタ演算子、&はアドレス演算子
    //ポインタはデータの住所であるアドレスを格納した変数
    char c, *p;
    char s[9] = "Software";

    c = 'A';
    p = &c;
    //%cは文字の出力フォーマット指定子
    printf("c: %c\n", c);
    //&pはアドレスの16進法表示フォーマット指定子
    printf("&c: %p\n\n", &c);
    printf("p: %p\n", p);
    printf("*p: %c\n\n", *p);

    *p = 'B';
    //*pに値を代入すると変数cの値も変わるしかし、アドレスの値は変わらない
    printf("c: %c\n", c);
    printf("&c: %p\n\n", &c);
    printf("p: %p\n", p);
    printf("*p: %c\n\n", *p);

    printf("s: %s\n", s);
    printf("s[0]: %c\n", s[0]);
    printf("s[1]: %c\n", s[1]);
    printf("*s: %c\n", *s);
    printf("*(s+1): %c \n", *(s+1));
    printf("&s[0]: %p\n", &s[0] );
    printf("s: %p\n\n", s);

    *(s+4) = 'W';
    printf("s: %s\n", s);






}