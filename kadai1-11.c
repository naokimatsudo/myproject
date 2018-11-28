#include<stdio.h>
#include<stdlib.h>
int main(){
    char* p = (char *)malloc(sizeof(char)*5);
    char* q = p;
    printf("文字を5つ入力して下さい\n");
    char* str = (char *)malloc(sizeof(char) * 2);
    for(int i = 0; i < 5; i++){
      scanf("%s", str);
      //strには入力した文字と改行文字の2つの文字が格納されている
      //*strはstr[0]と同じ意味を表しており*pには改行文字は代入されない
      *p = *str;
      p++;
    }
    p = q;
    printf("配列の中身は以下のようになります\n");
    for(int i = 0; i < 5; i++){
        printf("値：%c アドレス：%p\n\n", *p, p);
        p++;
    }
}

//ポインタpに格納されたアドレスはpで表され、そのアドレスにあるデータは*pで表される
//実は配列arrayにおいて、arrayという変数自体は配列の先頭の要素のアドレスを表している。すなわちarrayは&(array[0])と等しい。
