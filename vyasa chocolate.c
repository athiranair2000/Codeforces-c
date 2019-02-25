# include <stdio.h>
long long int s,a,b,c;
long long int price=1;
int i;
int main(){
         scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
    while(i>0){

        price=s/c;
        price+=(price/a)*b;
        i--;

        }
        printf("%lld",price);
    return 0;

}
