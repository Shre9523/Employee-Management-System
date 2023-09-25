#include "employee.h"
#include "packages.h"
#include "validations.h"
#include <stdio.h>

char dump;

void createEmployee(int *count, struct Employee emp[]) {
  int id;
  char *fname, *lname, *oname, *panNo;
  double CTC, basicSalary;
  int dd, mm, yy;

  printf("\nEnter new EMP Id: ");
  scanf("%d", &id);
  scanf("%c", &dump);

repeatFName:
  printf("Enter First Name: ");
  fname = readStringFromUser();
  if (validateNameAndNatioanlity(fname, strlen(fname)) == 0) {
    printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
    goto repeatFName;
  }

repeatLName:
  printf("Enter Last Name: ");
  lname = readStringFromUser();
  if (validateNameAndNatioanlity(lname, strlen(lname)) == 0) {
    printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
    goto repeatLName;
  }

repeatOName:
  printf("Enter Nick Name: ");
  oname = readStringFromUser();
  if (validateNameAndNatioanlity(oname, strlen(oname)) == 0) {
    printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
    goto repeatOName;
  }

repeatPan:
  printf("Enter PAN No.: ");
  panNo = readStringFromUser();
  if (validatePan(panNo, strlen(panNo)) == 0) {
    printf("\n* Invalid Pan No.! Pan No. format is ABCDE1234Z *\n\n");
    goto repeatPan;
  }

  printf("Enter CTC: ");
  scanf("%lf", &CTC);
  printf("Enter Basic Pay: ");
  scanf("%lf", &basicSalary);

  printf("Enter Date of Joining [DD MM YYYY]: ");
  scanf("%d%d%d", &dd, &mm, &yy);

  emp[*count].empId = id;
  strcpy(emp[*count].empName.firstName, fname);
  strcpy(emp[*count].empName.lastName, lname);
  strcpy(emp[*count].empName.MiddleName, oname);
  emp[*count].empCompensation.ctc = CTC;
  emp[*count].empCompensation.basicPay = basicSalary;
  strcpy(emp[*count].empIdInfo.panNumber, panNo);
  emp[*count].dateOfJoining.dd = dd;
  emp[*count].dateOfJoining.mm = mm;
  emp[*count].dateOfJoining.yy = yy;

  *count = *count + 1;

  printf("\n\n ** Employee Created Succfully ** \n\n");
}