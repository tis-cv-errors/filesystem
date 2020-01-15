#include <stdio.h>

int main (void)
{
  FILE * f = fopen ("input1.txt", "r");
  if (f) {
    int c = fgetc (f);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f);
  }
  
  char str[] = "This is tutorialspoint.com";$
    
  FILE * f2 = fopen ("input2.txt", "w");
  if (f2) {
    fwrite(str , 1 , sizeof(str) , f2);
    fclose (f);
  }
}
