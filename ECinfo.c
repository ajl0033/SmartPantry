#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "DietInfo.h"

void ECinfo() {

char *EC_FirstName = (char*)malloc(20);
char *EC_LastName = (char*)malloc(20);
char *EC_Email = (char*)malloc(40);
char *EC_PhoneNumber = (char*)malloc(12);

// Loop Validation
char *yn = (char*)malloc(3);
while (1) {
  // First Name
  while (1) {
    char *yn = (char*)malloc(3);
    char *EC_FirstName = (char*)malloc(20);
    printf("\nPlease enter your first name\n>> ");
    fgets(EC_FirstName, 20, stdin);
    printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_FirstName);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
  }

  // Last Name
  while (1) {
    char *yn = (char*)malloc(3);
    char *EC_LastName = (char*)malloc(20);
    printf("\nPlease enter your last name\n>> ");
    fgets(EC_LastName, 20, stdin);
    printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_LastName);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
  }

  // Email
  while (1) {
    char *yn = (char*)malloc(3);
    char *EC_Email = (char*)malloc(40);
    printf("\nPlease enter your email\n>> ");
    fgets(EC_Email, 40, stdin);
    printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_Email);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
  }

  // Phone Number
  while (1) {
    char *yn = (char*)malloc(3);
    char *EC_PhoneNumber = (char*)malloc(12);
    printf("\nPlease enter your phone number (no spaces or dashes)\n>> ");
    fgets(EC_PhoneNumber, 12, stdin);
    printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", EC_PhoneNumber);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
  }

  printf("\nIs all of your information correct? (type 'y' for yes, 'n' for no)\nYou entered...\nFirst Name: %sLast Name: %sEmail: %sPhone Number: %s>> ", EC_FirstName, EC_LastName, EC_Email, EC_PhoneNumber);
  fgets(yn, 3, stdin);
  if (yn[0] == 'y') {
    break;
    }
  }
}