#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_isogram(const char *word) {
  if (word == '\0') {
   return false;
  }

  size_t i;
  size_t len = strlen(word);
  for (i = 0; i < len; i++) {
    char first_char = word[i];
    
    size_t j;
    size_t len_2 = strlen(word);
    for (j = 0; j < len_2; j++) {
      if (i == j) {
        continue;
      }

      char second_char = word[j];
      if (isalpha(word[j])) {
        if (tolower(first_char) == tolower(second_char)) {
          return false;
        }
      }
    }
  }

  return true;
}

/*
int main(void)
{
  is_isogram("Some");
  return 0;
}
*/
