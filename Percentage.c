/** 
* C program to enter marks of five subjects and find the grade and percentage 
*/

#include<stdio.h>
int main()
{
	int eng, math, sci, hindi, comp;
	float per;
	
	/* Input the marks of five subjects from user*/
	printf("Enter five subject marks: ");
	scanf("%d%d%d%d%d", &eng, &math, &sci, &hindi, &comp);
	
	/* calculate percentage*/
	per = (eng + math + sci + hindi + comp )/5.0;
	printf("Percentage = %f\n", per);
	
	/* find the grade according to the percentage*/
	if(per>=85)
	{
		printf("Grade A");
	}
	else if (per>= 70)
	{
	printf("Grade B");
	}
	else if (per>=55)		
	{
	printf("Grade C");	
	}
	else if(per>=40)
	{
	printf("Grade D");	
	}
	else
	{
	printf("Grade F");	
	}
	return 0;	
}
