#include <stdio.h>
struct Date {
  int dd, mm, yy;
};

struct Name {
  char firstName[50];
  char lastName[50];
  char MiddleName[50];
};

struct NationalIdInfo {
  char panNumber[50];
};

struct Compensation {
  double ctc;
  double basicPay;
};

struct Employee {
  int empId;
  struct Name empName;
  struct NationalIdInfo empIdInfo;
  struct Compensation empCompensation;
  struct Date dateOfJoining;
};
void printAllEmployee(int sz, struct Employee emp[]);
void searchEmployee(int *sz, struct Employee emp[], char operation[20]);
void printEmployeeByEmpID(struct Employee *emp);
void createEmployee(int *count, struct Employee emp[]);
void removeEmployee(int count, int sz, struct Employee emp[]);
void updateEmployeeByEmpID(struct Employee *emp);
void netPay(struct Employee *emp);