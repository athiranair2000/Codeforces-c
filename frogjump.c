#include<stdio.h>
#define sf scanf
#define pf printf
int main()
{
long long a,b,k,pos,t;
sf("%lld",&t);
while(t>0)
{
sf("%lld%lld%lld",&a,&b,&k);
if(k%2!=0)
{
pos=a*((k/2)+1)-b*(k/2);
}
else
{
pos=a*(k/2)-b*(k/2);
}
pf("%lld\n",pos);
t--;
}
}


