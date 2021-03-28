#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()


{


int x;
int y = 1;
int z;

printf("\nEnter Table No: ");
scanf(" %d", &x);

int a = x * 20;

for(z=x; z<=a; z+=x){
	printf("\n %d * %d = %d\n", y, x, z);    // 1 x 1 = 1
	y++;                                     
}
















	return 0;
}
