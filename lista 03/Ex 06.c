#include<stdio.h>



int main(){
	int a, c, *p;
	
	
	a = 30;
	p = &a;
	c = *p;
	
	*p = 50;
	printf("B : %d", c);
	
return 0;
}
