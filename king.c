#include <stdio.h>
long long  n,x,y;
int main()
{
	scanf("%lld%lld%lld",&n,&x,&y);
	
	if(x+y<n+2){
		printf("white");
	}
	else{
		printf("black");
	}
	
	return 0;
}

