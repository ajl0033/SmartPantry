#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void ECinfo() {
  // Opening EmergencyContact.txt
  FILE *fp;
  fp = fopen("Data/EmergencyContact.txt", "w+");
  if (fp == NULL) {
    printf("\n\nERROR opening FILE\n\n");
  }

  // Loop Validation
  char *yn = (char*)malloc(3);

  char *EC_FirstName = (char*)malloc(20);
  char *EC_LastName = (char*)malloc(20);
  char *EC_Email = (char*)malloc(40);
  char *EC_PhoneNumber = (char*)malloc(12);

  while (1) {

    char *EC_FirstName = (char*)malloc(20);
    char *EC_LastName = (char*)malloc(20);
    char *EC_Email = (char*)malloc(40);
    char *EC_PhoneNumber = (char*)malloc(12);

    while (1) {
      char *yn = (char*)malloc(3);
      printf("\nPlease enter the Emergency Contact's first name\n>> ");
      fgets(EC_FirstName, 20, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_FirstName);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
      char *EC_FirstName = (char*)malloc(20);
    }

    // Last Name
    while (1) {
      char *yn = (char*)malloc(3);
      printf("\nPlease enter the Emergency Contact's last name\n>> ");
      fgets(EC_LastName, 20, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_LastName);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
      char *EC_LastName = (char*)malloc(20);
    }

    // Email
    while (1) {
      char *yn = (char*)malloc(3);

      printf("\nPlease enter the Emergency Contact's email\n>> ");
      fgets(EC_Email, 40, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_Email);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
      char *EC_Email = (char*)malloc(40);
    }

    // Phone Number
    while (1) {
      char *yn = (char*)malloc(3);
      printf("\nPlease enter the Emergency Contact's phone number (no spaces or dashes)\n>> ");
      fgets(EC_PhoneNumber, 12, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_PhoneNumber);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
      char *EC_PhoneNumber = (char*)malloc(12);
    }

    printf("\nIs all of your information correct? (type 'y' for yes, 'n' for no)\nYou entered...\nFirst Name: %sLast Name: %sEmail: %sPhone Number: %s>> ", EC_FirstName, EC_LastName, EC_Email, EC_PhoneNumber);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      fprintf(fp, "%s", EC_FirstName);
      fprintf(fp, "%s", EC_LastName);
      fprintf(fp, "%s", EC_Email);
      fprintf(fp, "%s", EC_PhoneNumber);
      break;
    }

  }


  fclose(fp);
  return;
}
