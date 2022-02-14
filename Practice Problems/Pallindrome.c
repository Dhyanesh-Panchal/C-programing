/* Dhyanesh Panchal
  date:- 31/10/2021  */

// Identify Pallindrome words
#include <stdio.h>
#include <string.h>

int main()
{
  char inp[20000], oup[20000];
  printf("Enter the word\n");
  gets(inp);
  for (int i = 0; i <= strlen(inp) - 1; i++)
  {
    oup[i] = inp[strlen(inp) - 1 - i];
  }

  for (int j = 0; j <= strlen(inp) - 1; j++)
  {
    if (oup[j] == inp[j])
    {
      continue;
    }

    else
    {
      printf("No,it is not a pallindrome word.");
      goto end;
    }
  }
  printf("Yes,it is a pallindrome word.");
end:

  return 0;
}
