#include "manager.h"
#include <stdio.h>

int main() {
  struct Employee employees[50];
  int count = 0;
  printf("\n******** WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ********\n");
  char c;
  do {
    printf("\n           1. Display All Employee Details");
    printf("\n           2. Search Employee Details");
    printf("\n           3. Create Employee Details");
    printf("\n           4. Update Employee Details");
    printf("\n           5. Delete/Remove Employee Details");
    printf("\n           6. Calculate Net Pay of an Employee");
    printf("\n           7. Exit");

    printf("\n\nEnter your c: ");
    scanf(" %c", &c);

    switch (c) {
    case '1':
      printAllEmployee(count, employees);
      break;
    case '2':
      searchEmployee(&count, employees, "print");
      break;
    case '3':
      createEmployee(&count, employees);
      break;
    case '4':
      searchEmployee(&count, employees, "update");
      break;
    case '5':
      searchEmployee(&count, employees, "remove");
      break;
    case '6':
      searchEmployee(&count, employees, "calcNetPay");
      break;
    case '7':
      printf("\n********** EXITED **********\n");
      break;
    default:
      printf("\nInvalid entry, try again\n");
    }
  } while (c != '7');
  return 0;
}