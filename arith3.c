#include<stdio.h>
int main()
{
int N,A,D,i,sum=0;
scanf("%d %d %d",&N,&A,&D);
for(i=N;i>1;i--)
{
sum=sum+(A+(N-1)*D);
}
return 0;
}
