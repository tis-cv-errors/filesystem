#include <stdio.h>

int main (void)
{
  FILE * f = fopen ("input.txt", "r");
  if (f) {
    int c = fgetc (f);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f);
  }
  
  char str[] = "This is tutorialspoint.com";
  
  FILE * f2 = fopen ("input2.txt", "w+");
    
  FILE * f3 = fopen ("input3.txt", "w+");
  if (f3) {
    fwrite(str , 1 , sizeof(str) , f3);
    fclose (f3);
  }
  
  f3 = fopen ("input3.txt", "r");
  if (f3) {
    int c = fgetc (f3);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f3);
  }
  
}
