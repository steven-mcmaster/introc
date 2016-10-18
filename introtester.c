#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int main(void)
{
int64_t abbb = 97;
char strin[] = "test"; 
double nums = 154.53;

printf("%44.1" PRId64 "loliz%.2f\n", abbb, nums); 

}
