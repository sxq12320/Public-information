
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,num,t,t0; 
	
	scanf("%d",&num);
	t=num;
	for(i=1;;i++)
		{
			if(t==1||t==0)break;
			else if(t%2==0){t0=t;t=t/2;printf("%d/2=%d\n",t0,t);}
			    else {t0=t;t=t*3+1;
			        printf("%d*3+1=%d\n",t0,t);
				    }
			
		}
	
		
    printf("End");
	
	return 0;
}
