#include<stdio.h>



int main(){
	int a, c, *p;
	
	
	a = 250;
	p = &a;
	c = *p;
	

	printf("C : %d\n", c);
	printf("P : %d\n", *p);
	printf("local de memoria: %d", p);
return 0;
}
