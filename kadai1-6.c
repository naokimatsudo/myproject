// sample 1-6
#include <stdio.h>
int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
   if(a % i == 0){
     return i;
   }
   i++;
  }
  return 0;
}

int main(){
  int input, factor, new, fact;
  printf("Type in a number: ");
  scanf("%d", &input);
  if(input == 1){ printf("1 is not a prime number.\n"); return 0;}
  factor = getSmallestFactor(input);
  if(factor == 0){
    printf("%d is a prime number.\n", input);
  }else{
    printf("%d",factor);
    while (factor > 0){
      input = input / factor;
      factor = getSmallestFactor(input);
      if(factor == 0){
        printf("*%d\n",input);
        return 0;
      }else{
        printf("*%d", factor);
      }
    }
  }
}
