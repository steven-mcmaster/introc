#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  printf("printing things %d\n",argc); 
  //printf("printing things %s\n",argv[1]); 
  for(int x=0; x<argc; ++x){
  printf("printing things %s\n",argv[x]); 
  printf("ttestttt%ld\n", 5 + strtol(argv[1],NULL,10));
}

  puts("give me your nums\n");
  char input[5];
  fgets(input,sizeof(input), stdin);
  printf("%s\n",input);
/*
  if(argc != 2) {
  printf("yousuck gimme 1 args\n");
  return 1;
  printf("ttestttt%ld\n", 5 + strtol(argv[1],NULL,10));
  
  }
*/

}
