#include <stdio.h>

int main()
{
//    Row cache
//    way 1: \n
//    printf("Hello World!");
//      printf("Hello World!\n");

//    way2: return 0
//      printf("Hello World!");
//    return 0;


//      way3: fflush function
//      printf("Hello");
//      fflush: refresh function;
//      stdout: stand out
//      fflush(stdout);

//      way4: RAM is fulled, auto refresh
      int i;
      for(i = 1; i < 300; i++){
          printf("%03d", i);
      }
      while(1);
      return 0;



//    return 0;
}
