#include <unistd.h>

void print(char string[])
{
   int size = 0;

   while(string[size] != '\0')
   {
        size++;
   }
   write(1, string, size);
}