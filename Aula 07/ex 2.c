#include <stdio.h>
#include <conio.h>
int main (void) {
 float *pA, *pB;
 
 pA = (float *) 5000;
 pB = (float *) 4000;

printf("Difirenca entre os ponteiros=%d\n",pA - pB);

return 0;
}

