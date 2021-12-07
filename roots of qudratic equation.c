#include<stdio.h>
#include<math.h>
main()
{
	int x,y,z,R;
	float b,c;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
      R=y*y-4*x*z;
    if (R>=0)
    {
    	if (R==0)
    	 {
    	 	printf("roots are real and equal");
    	 	b=(-y)/2*x , c=(-y)/2*x;
    	 	printf("%f %f",b,c);
		 }
	   else  
	    {
	    	printf("roots are real and not equal");
	    	b=(-y+sqrt(R))/2*x , c=(-y-sqrt(R))/2*x;
	    	printf("%f %f",b,c);
	    }
    }
    else 
    {
    	printf("roots are imaginary");
	}
			
}
