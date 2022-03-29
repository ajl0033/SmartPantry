#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "UserInfo.h"
#include "ECinfo.h"
#include "Inventory.h"

int main() {

  // User Selection
  char *UserInput = (char*)malloc(3);

  // Open File and check for data
  FILE *fp;
  fp = fopen("Data/User.txt", "r");
  if (fp == NULL) {
    printf("\n\nERROR opening FILE\n\n");
  }
  if (fgetc(fp) == -1) {
    printf("WELCOME TO THE SMART PANTRY\n---------------------------\n\nInitial Setup:\n");
    userinfo();
    ECinfo();
    inventory();
  }

  // Main Loop of Persistent Application
  while (1) {
    // Print Menu
    printf("What would you like to do?\n(Type the letter of your entry and press enter)\n");
    printf("a) Edit User Information\n");
    printf("b) Edit Emergency Contact Information\n");
    printf("c) Edit Item Information\n");
    printf("d) Shutdown\n");

    // Get User Selection
    fgets(UserInput, 3, stdin);

    // Logic to determine what to execute
    if (UserInput[0] == 'a') {
      printf("AAA\n\n");
    } else if (UserInput[0] == 'b') {
      printf("BBB\n\n");
    } else if (UserInput[0] == 'c') {
      printf("CCC\n\n");
    } else if (UserInput[0] == 'd') {
      printf("\nShutting down...\n\n");
      break;
    }
  }


  return 1;
}
