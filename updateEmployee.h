#include <stdio.h>
#include <string.h>

char dump;

void updateEmployeeByEmpID(struct Employee *emp) {
  char c1, c2;
  do {
    printf("\n\nWhat to update ?");
    printf("\n1. Employee ID");
    printf("\n2. Name");
    printf("\n3. National ID Information");
    printf("\n4. Compensation");
    printf("\n5. Exit");

    printf("\n\nEnter c: ");
    scanf(" %c", &c1);
    switch (c1) {
    case '1':
      printf("Enter new Emp ID: ");
      scanf("%d", &emp->empId);
      scanf("%c", &dump);
      printf("Updated!!");
      break;
    case '2':
      do {
        printf("\n\nWhich part of name needs to be update ?");
        printf("\n1. First Name");
        printf("\n2. Last Name");
        printf("\n3. Other Name");
        printf("\n4. Exit");

        printf("\n\nEnter c: ");
        scanf(" %c", &c2);
        scanf("%c", &dump);

        switch (c2) {
        case '1':
        repeatNewFname:
          printf("\nEnter new first name: ");
          char *updatedFname = readStringFromUser();
          if(validateNameAndNatioanlity(updatedFname, strlen(updatedFname)) == 0) {
            printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
            goto repeatNewFname;
          }
          strcpy(emp->empName.firstName, updatedFname);
          printf("First name updated !!\n");
          break;
        case '2':
        repeatNewLname:
          printf("\nEnter new last name: ");
          char *updatedLname = readStringFromUser();
          if(validateNameAndNatioanlity(updatedLname, strlen(updatedLname)) == 0) {
            printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
            goto repeatNewLname;
          }
          strcpy(emp->empName.lastName, updatedLname);
          printf("Last name updated");
          break;
        case '3':
        repeatNewOname:
          printf("\nEnter new nick name: ");
          char *updatedOname = readStringFromUser();
          if(validateNameAndNatioanlity(updatedOname, strlen(updatedOname)) == 0) {
            printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
            goto repeatNewOname;
          }
          strcpy(emp->empName.MiddleName, updatedOname);
          printf("Nick name updated");
          break;
        case '4':
          printf("*** Exited ***");
          break;
        default:
          printf("Please enter valid entry");
        }
      } while (c2 != '4');
      break;
    case '3':
      do {
        printf("\n\nNational ID needs to be updated ?");
        printf("\n2. Pan Number");
        printf("\n4. Exit");

        printf("\n\nEnter c: ");
        scanf(" %c", &c2);
        scanf("%c", &dump);

        switch (c2) {
        case '1':
        repeatNewPan:
          printf("\nEnter new Pan No.: ");
          char *updatedPanNo = readStringFromUser();
          if(validatePan(updatedPanNo, strlen(updatedPanNo)) == 0) {
            printf("\n* Invalid Pan No.! Pan No. format is ABCDE1234Z *\n\n");
            goto repeatNewPan;
          }
          strcpy(emp->empIdInfo.panNumber, updatedPanNo);
          printf("Pan number updated");
          break;
        case '4':
          printf("*** Exited ***");
          break;
        default:
          printf("Please enter valid entry");
        }
      } while (c2 != '4');
      break;
    case '4':
      printf("Enter new CTC: ");
      scanf("%lf", &emp->empCompensation.ctc);
      printf("Enter new basic pay: ");
      scanf("%lf", &emp->empCompensation.basicPay);
      scanf("%c", &dump);

      printf("Salary updated!");
      break;
    case '5':
      printf("\n**** EXITED ****\n");
      break;
    default:
      printf("Invalid entry, Please try again");
    }
  } while (c1 != '5');
}