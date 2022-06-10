//Q10
//You have been given 3 integers - l, r and k. Find how many numbers between l and r
//(both inclusive) are divisible by k. You do not need to print these numbers, you just have
//to find their count.
#include <stdio.h>
int main()
{
  int l,r,k,count=0;
  printf("Enter the values of l, r and k, separated by spaces: ");
  scanf("%d %d %d",&l,&r,&k);
  for(;l<=r;l++)
    {
      if(l%k==0)
        count++;
    }
  printf("%d numbers between given range are divisible by %d.",count,k);
  return 0;
}
