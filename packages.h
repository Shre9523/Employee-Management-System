#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *readStringFromUser() {
  char buffer[100];
  char *input;

  if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
    size_t length = strlen(buffer);

    if (length > 0 && buffer[length - 1] == '\n') {
      buffer[length - 1] = '\0'; 
    }

    input = (char *)malloc(length);
    if (input != NULL) {
      strcpy(input, buffer);
      return input;
    }
  }

  return NULL; 
}