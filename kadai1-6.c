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


