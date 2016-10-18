#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   puts("Type\t\t\tSize");
   printf("char\t%18zd\n", sizeof(char));
   printf("short\t%18zd\n", sizeof(short));
   printf("int\t%18zd\n", sizeof(int));
   printf("long_int\t%10zd\n", sizeof(long));
   printf("long long\t%10zd\n", sizeof(long long));
   printf("long double\t%10zd\n", sizeof(long double));
   printf("size_t\t%18zd\n", sizeof(size_t));
   printf("void*\t%18zd\n", sizeof(void*));
   printf("func\t%18zd\n", sizeof(void (*)()));
}
