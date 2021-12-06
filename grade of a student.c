#include<stdio.h>
main()
{
	int maths,physics,chemsitry,english,clang,total;
	float cgpa;
	scanf("%d",&maths);
	scanf("%d",&physics);
	scanf("%d",&chemsitry);
	scanf("%d",&english);
	scanf("%d",&clang);
	total=maths+physics+chemsitry+english+clang;
	cgpa=(total/5);
	if(cgpa>90)
	{
		printf("A grade");
	}
	else if(cgpa>80)
	{
		printf(" B grade");
	}
	else if(cgpa>70)
	{
		printf("C grade");
	}
	else if(cgpa>40)
	{
		printf("D grade");
	}
	else if(cgpa<40)
	{
		printf("E grade");
	}
}
