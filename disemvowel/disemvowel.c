#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "disemvowel.h"

char* disemvowel(char* str) {

  int vowelCount, i, resultLength, j, length;
  length = strlen(str);
    
  for (i = 0; i < length; i++) {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
      vowelCount++;
    }
  }

  char* result;
  resultLength = length - vowelCount + 1;
  result = calloc(resultLength, sizeof(char));
  j = 0;
  for(i = 0; i < length; i++){
    if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
      result[j] = str[i];
      j++;
    }
  }
  result[resultLength - 1] = '\0';
  return result;
}
