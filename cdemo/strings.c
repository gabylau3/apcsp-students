#include <stdio.h>
#include <string.h>

int main()

{
  char str[] = "abcdefghijklmnopqrstuvwxyz";

  printf("first string : %s\n", str);

  char str2[27];
  for ( int i = 0; i < 26; i++)
  {
    
    str2[i] = 97 + i - 32;
  }
  str2[26] = '\0';
  printf("second str : %s\n", str2);

  if (strcmp(str, str2) == 0)
    printf("the strings are identical\n");

  else
    printf("the strings are different\n");

  char str3[53];
    strcat (str3, str);
    strcat (str3, str2); 
    str3[53] = '\0';
    printf("%s\n", str3);
}


