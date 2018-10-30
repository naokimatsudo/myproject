// sample 1-5
#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int fact = 1;
	int num = 10;
	double e = 1;
	for(i=1; i<=num; ++i) {
        fact = fact * i;
	e = e + 1.0/fact;
        };
printf("ネイピア数 = %f\n",e);

}	
