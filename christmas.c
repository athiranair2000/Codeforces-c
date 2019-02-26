# include <stdio.h>
int main(){
int y,r,b,i=1,j=2,k=3,sum=3;
scanf("%d%d%d",&y,&r,&b);
while(i<=y&&j<=r&&k<=b){
i=i+1;
j=j+1;
k=k+1;
sum=sum+3;
}
printf("%d",sum);
return 0;
}


