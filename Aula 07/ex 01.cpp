#include <stdio.h>
#include <conio.h>
int main (void) {
	char *pChar;
	int  *pInt;
	float *pFloat;
	
	pChar = (char *) 90;
	pChar = pChar + 2;
	
	pInt =(int *)80;
	pInt += 1;
	
	pFloat=(float *) 70;
	pFloat +=2;
	
	
	printf("\npChar %%c = %c",pChar);
	printf("\npInt %%d = %d",pInt);
	printf("\npFloat %%f = %f",pFloat);
	printf("\n\n Formato para ponteiro \n");
	printf("\nponteiro para pChar %%p = %p",pChar);
	printf("\nponteiro para pInt %%p = %p",pInt);
	printf("\nponteiro para pFloat %%p = %p",pFloat);				
	getch();
					
	
return 0;				
}
