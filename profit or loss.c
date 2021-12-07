#include<stdio.h>
main()
{
	int cp,sp,x;
	scanf("%d%d",&sp,&cp);
	x=sp-cp;
	if(x>0)
	{
		printf("profit %d",x);
	}
	else
	{
		printf("loss %d",x);
	}
}
