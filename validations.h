#include <stdio.h>

int validateNameAndNatioanlity(char name[], int sz) {
  int i;
  for (i = 0; i < sz; i++) {
    if (name[i] == ' ')
      continue;
    else if ((name[i] >= 'a' && name[i] <= 'z') ||
             (name[i] >= 'A' && name[i] <= 'Z'))
      continue;
    else
      break;
  }
  if (i < sz)
    return 0;
  return 1;
}

int validatePan(char pan[], int sz) {
  if (sz != 10)
    return 0;
  int i;
  for (i = 0; i < sz; i++) {
    if (i < 5 || i == 9) {
      if (pan[i] >= 'A' && pan[i] <= 'Z')
        continue;
      else
        return 0;
    } else if (i >= 5 && i <= 8) {
      if (pan[i] >= '0' && pan[i] <= '9')
        continue;
      else
        return 0;
    }
  }
  return 1;
}