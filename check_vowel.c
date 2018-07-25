#include "stdio.h"

int check_char_with_if(char ch);
int check_char_with_case(char ch);

int main(int argc, char *argv[])
{
  char ch;
  printf("Input a character\n");
  scanf("%c", &ch);

  check_char_with_if(ch);
  check_char_with_case(ch);

  return 0;
}

int check_char_with_if(char ch)
{
  if ((ch >= 'a' && ch <=  'z') || (ch >= 'A' && ch <= 'Z')) {
    if (ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ||
        ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U') {
      printf("The character is a vowel\n");
    } else {
      printf("The character is a consonant\n");
    }
    return 1;
  }
  else {
    printf("The character is not an English alphabet\n");
    return 0;
  }
}

int check_char_with_case(char ch)
{
  switch (ch) {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    printf("The character is a vowel\n");
    break;
default:
  printf("The character is not a vowel\n");
  }
  return 0;
}
