#include <stdio.h>

int main (void)
{
  FILE * f = fopen ("input.txt", "w");
  if (f) {
    int c = fgetc (f);
    if (c != EOF)
      printf ("First char = '%c'\n", (char)c);
    fclose (f);
  }
}
