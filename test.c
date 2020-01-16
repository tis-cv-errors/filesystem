#include <stdio.h>

int main (void)
{
  printf ("Read 1st file\n");
  FILE * f = fopen ("input.txt", "r");
  if (f) {
    int c = fgetc (f);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f);
  }
  
  printf ("Read 2nd file\n");
  FILE * f2 = fopen ("input2.txt", "r");
  if (f2) {
    int c = fgetc (f2);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f2);
  }
  
  printf ("Create and write 3rd file\n");
  FILE * f3 = fopen ("input3.txt", "w+");
  if (f3) {
    char str[] = "This is tutorialspoint.com";
    fwrite(str , 1 , sizeof(str) , f3);
    fclose (f3);
  }
  
  printf ("Read 3rd file\n");
  f3 = fopen ("input3.txt", "r");
  if (f3) {
    int c = fgetc (f3);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f3);
  }
  
}
