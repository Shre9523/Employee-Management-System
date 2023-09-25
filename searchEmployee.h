// #include "../employee.h"
#include <stdio.h>
#include <string.h>

void searchEmployee(int *sz, struct Employee emp[], char operation[20]) {
  int id, i, found = 0;
  printf("Enter Emp ID: ");
  scanf("%d", &id);

  for (i = 0; i < *sz; i++) {
    if (emp[i].empId == id) {
      if (strcmp(operation, "print") == 0) {
        printEmployeeByEmpID(&emp[i]);
      } else if (strcmp(operation, "update") == 0) {
        updateEmployeeByEmpID(&emp[i]);
      } else if (strcmp(operation, "remove") == 0) {
        removeEmployee(i, *sz, emp);
        *sz = *sz - 1;
        printf("\n*** Removed Successfully! ***\n");
      } else if (strcmp(operation, "calcNetPay") == 0) {
        netPay(&emp[i]);
      }
      found = 1;
      break;
    }
  }

  if (found == 0) {
    printf("\nEmployee with Employee ID: %d does not exist!\n", id);
  }
}