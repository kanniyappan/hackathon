#include <stdio.h>
int main()
{
   int num1, num2, flag_var, i, j,c=0;
  scanf("%d %d", &num1, &num2);
   for(i=num1; i<=num2; ++i)
   {
      flag_var=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag_var=1;
            break;
         }
      }
      if(flag_var==0)
      {
          c++;
    }
    
  }
  printf("%d",c);
  return 0;
}
