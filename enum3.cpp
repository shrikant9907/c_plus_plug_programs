#include <stdio.h>
enum State {Working = 1, Failed = 0 , Freezed = 2 };
 
int main()
{
   printf("%d, %d, %d", Working, Failed, Freezed);
   
   return 0;
}
