  
#include<stdio.h>
#include<conio.h>
int f(int a);
int main()

{   
	int a;
	printf("enter the number n to find n sum of n numbers\n");
	scanf("%d",&a);
	printf("The sum of first %d numbers is %d.", a, f(a));
	
}
int f(int a)
{
	
    if(a!=0)
	return (a+f(a-1));
	else 
	return a;
}
			

		



		
