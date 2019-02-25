# include <stdio.h>
int r,temp=0,i,j,n;
int sum[];
int main(){

for(i=0;i<=r;r++){
    for(j=0;j<=r;j++){
        scanf("%d",&n);

    }
    sum=sum+n;
    }
    for(i=0;i<=n;i++){
    temp=sum;
    sum[i]=sum[i]+1;
    temp=sum[i+1];
    }
    printf(temp);

}
