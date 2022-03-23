#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "DietInfo.h"

void dietinfo() {

  char *yn = (char*)malloc(3);

  char *User_Age = (char*)malloc(10);
  char *User_Height = (char*)malloc(10);
  char *User_Weight = (char*)malloc(10);

  while(1){

    char *User_Age = (char*)malloc(10);
    char *User_Height = (char*)malloc(10);
    char *User_Weight = (char*)malloc(10);

    while (1) {
      char *yn = (char*)malloc(3);
      printf("\nPlease enter your age\n>> ");
      fgets(User_Age, 10, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", User_Age);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
      char *User_Age = (char*)malloc(10);
    }

    while (1) {
      char *yn = (char*)malloc(3);
      printf("\nPlease enter your height in inches ie 5'8'' = 68\n>> ");
      fgets(User_Height, 10, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", User_Height);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
      char *User_Height = (char*)malloc(10);
    }

    while (1) {
      char *yn = (char*)malloc(3);
      printf("\nPlease enter your weight in pounds\n>> ");
      fgets(User_Weight, 10, stdin);
      printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ", User_Weight);
      fgets(yn, 3, stdin);
      if (yn[0] == 'y') {
        break;
      }
      char *User_Weight = (char*)malloc(10);
    }

    printf("\nIs all of your information correct? (type 'y' for yes, 'n' for no)\nYou entered...\nAge: %sHeight: %sWeight: %s>> ", User_Age, User_Height, User_Weight);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
  }
}
