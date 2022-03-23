#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void main() {

  // User Info
  char *User_FirstName = (char*)malloc(20);
  char *User_LastName = (char*)malloc(20);
  char *User_Email = (char*)malloc(40);
  char *User_PhoneNumber = (char*)malloc(12);

  // Loop Validation
  char *yn = (char*)malloc(3);

  printf("WELCOME TO THE SMART PANTRY\n---------------------------\n\n");

  printf("Initial Setup:\n");
  while (1) {
    // First Name
    while (1) {
      char *yn = (char*)malloc(3);
      char *User_FirstName = (char*)malloc(20);
      printf("\nPlease enter your first name\n>> ");
      fgets(User_FirstName, 20, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", User_FirstName);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
    }

    // Last Name
    while (1) {
      char *yn = (char*)malloc(3);
      char *User_LastName = (char*)malloc(20);
      printf("\nPlease enter your last name\n>> ");
      fgets(User_LastName, 20, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", User_LastName);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
    }

    // Email
    while (1) {
      char *yn = (char*)malloc(3);
      char *User_Email = (char*)malloc(40);
      printf("\nPlease enter your email\n>> ");
      fgets(User_Email, 40, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", User_Email);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
    }

    // Phone Number
    while (1) {
      char *yn = (char*)malloc(3);
      char *User_PhoneNumber = (char*)malloc(12);
      printf("\nPlease enter your phone number (no spaces or dashes)\n>> ");
      fgets(User_PhoneNumber, 12, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", User_PhoneNumber);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
    }

    printf("\nIs all of your information correct? (type 'y' for yes, 'n' for no)\nYou entered...\nFirst Name: %sLast Name: %sEmail: %sPhone Number: %s>> ", User_FirstName, User_LastName, User_Email, User_PhoneNumber);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
  }
}











//
