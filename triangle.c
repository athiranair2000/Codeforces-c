#include<stdio.h>

#define min(a,b) (a<b?a:b)

int a,b,c,res=0;
int main()
{

	scanf("%d %d %d",&a,&b,&c);	
	res=min((a+b-c),min(b+c-a,c+a-b));
	if(res>0)
		printf("%d",0);
	else
		printf("%d",-res+1);
}
		
