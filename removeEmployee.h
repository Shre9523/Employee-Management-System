#include <stdio.h>

void removeEmployee(int count, int sz, struct Employee emp[]) {
  int i = count;
  for (; i < sz - 1; i++) {
    emp[i] = emp[i + 1];
  }
}