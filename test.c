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
    char str[] = "3rd file content";
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
  
  printf ("Create and write 4rd file\n");
  FILE * f4 = fopen ("input4.txt", "w+");
  if (f4) {
    char str[] = "4th file content";
    fwrite(str , 1 , sizeof(str) , f4);
    fclose (f4);
  }
  
  printf ("Read 4rd file\n");
  f4 = fopen ("input4.txt", "r");
  if (f4) {
    int c = fgetc (f4);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f4);
  }
  
  printf ("Create and write 5rd file\n");
  FILE * f5 = fopen ("input5.txt", "w+");
  if (f5) {
    char str[] = "5th file content";
    fwrite(str , 1 , sizeof(str) , f5);
    fclose (f5);
  }
  
  printf ("Read 5rd file\n");
  f5 = fopen ("input5.txt", "r");
  if (f5) {
    int c = fgetc (f5);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f5);
  }
}
