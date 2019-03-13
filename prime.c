#include <stdio.h>

int main()
{
  int i,flag,low,high;
  printf("enter the number");
  scanf("%d %d",&low,&high);
  printf("enter the prime %d and %d",low,high);
  while (low<high)
  {
      flag=0;
      for(i=2;i<low/2;i++)
      {
          if(low%i==0)
          {
              flag=i;
              break;
          }
      }
      if(flag==0)
      printf("%d",low);
      low++;
  }
}
