#include<stdio.h>

main()
{
	printf("\t*\t*\n");
	printf("    *\t    *\n");
	printf("*\t*\n");
	printf("    *\t    *\n");
	printf("\t*\t*\n\n\n\n\n");
	
	printf("     *    *    *    *    *    *    *\n\n\n");
	printf("*    *    *    *    *    *    *    *\n\n");
	printf("*\t  *\t\t\t   *\n\n");
	printf("*\t  *\t    *    *    *    *\n\n");
	printf("*\t  *\t    *\t      *    *\n\n");
	printf("*    *    *    *    *    *    *    *\n\n\n\n\n");
	
	int a,b,c;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("two variables => " "a = %d,b = %d\n",a,b);
	
	
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("with third variable => ""a = %d,b = %d\n\n\n\n\n",a,b);
	
	

	float f;
	printf("Enter Temperature = ");
	scanf("%f",&c);
	f=c*9/5+32;
	printf("f = %.2f",f);	
	
	
	int s = 100; 
	int h = 10; 
	int d = 5; 
	int t = 8;
	int GS = s+(s*10/100)+(s*5/100)+(s*8/100);
	printf("\n\n\n ANS = %d", GS);
}