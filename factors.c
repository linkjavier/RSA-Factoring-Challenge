#include <stdio.h>
 
int main()
{
  long long int i, Number;
     
  printf("\n Please Enter any number to Find Factors \n");
  scanf("%lld", &Number);
 
  printf("\n Factors of the Given Number are:\n");
  for (i = 2; i <= Number; i++)
   {
     if(Number%i == 0)
        {
		printf(" %lld=%lld*%lld  ", Number,Number/i,i);
		break;
	}
   }
 
  return 0;
}
