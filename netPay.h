// #include "../employee.h"
#include <stdio.h>

void netPay(struct Employee *emp) {
  double dearnessAllowance = 0.4 * emp->empCompensation.basicPay;
  double travellingAllowance = 0.1 * emp->empCompensation.basicPay;
  double providentFund = 0.05 * emp->empCompensation.basicPay;

  printf("\nEmployee ID: %d", emp->empId);
  printf("\nEmployee Full Name: %s %s", emp->empName.firstName,
         emp->empName.lastName);
  printf("\nDearness Allowance: %lf", dearnessAllowance);
  printf("\nTravelling Allowance: %lf", travellingAllowance);
  printf("\nProvident Fund: %lf\n", providentFund);
}