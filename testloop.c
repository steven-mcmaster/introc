#include <stdio.h>

int main(void)
{

  int grades[] = {12,51,562,23,88};
  int n = 0;

  while(n<5){
    printf("Grade %d is %d \n",n, grades[n]);
    ++n;
    }
// OR

  for(int f =0;f<5;++f){
     printf("Grade %d is %d \n",f, grades[f]);
  }
  
}

