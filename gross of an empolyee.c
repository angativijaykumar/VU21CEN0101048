#include<stdio.h>
main()
{
	int basic,gross;
	float HRI,DA;
	scanf("%d",&basic);
	if(basic<=10000)
	{
		float HRI=(basic*20)/100;
		float DA=(basic*80)/100;
		gross=basic+HRI+DA;
		printf("%d",gross);
	}
	else if(basic<=20000)
	{
		float HRI=(basic*25)/100;
		float DA=(basic*90)/100;
		gross=basic+HRI+DA;
		printf("%d",gross);
	}
	else if(basic>20000)
	{
		float HRI=(basic*30)/100;
		float DA=(basic*85)/100;
		gross=basic+HRI+DA;
		printf("%d",gross);
	}
}
