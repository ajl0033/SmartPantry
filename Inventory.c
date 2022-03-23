#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "Inventory.h"

void inventory() {
  // Opening Inventory.txt
  FILE *fp;
  fp = fopen("/Data/Inventory.txt", "w+");

  char *Item_Name = (char*)malloc(50);
  char *Item_Weight = (char*)malloc(20);
  char *Threshold = (char*)malloc(20);

// Loop Validation
char *yn = (char*)malloc(3);

while (1) {

  char *Item_Name = (char*)malloc(50);
  char *Item_Weight = (char*)malloc(20);
  char *Threshold = (char*)malloc(20);

  while (1) {
    char *yn = (char*)malloc(3);
    printf("\nPlease enter the items name\n>> ");
    fgets(Item_Name, 50, stdin);
    printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ",Item_Name);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
    char *Item_Name = (char*)malloc(50);
  }

  while (1) {
    char *yn = (char*)malloc(3);
    printf("\nPlease enter the items weight\n>> ");
    fgets(Item_Weight, 20, stdin);
    printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ",Item_Weight);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
    char *Item_Weight = (char*)malloc(20);
  }

  while (1) {
    char *yn = (char*)malloc(3);
    printf("\nPlease enter the threshold to be notified at between 0-100 -- ie. notified when apples are less than 50% orginal weight an email will be sent \n>> ");
    fgets(Threshold, 20, stdin);
    printf("\nIs this correct? (type 'y' for yes, 'n' for no)\nYou entered: %s>> ",Threshold);
    fgets(yn, 3, stdin);
    if (yn[0] == 'y') {
      break;
    }
    char *Threshold = (char*)malloc(20);
  }

  printf("\nIs all of your information correct? (type 'y' for yes, 'n' for no)\nYou entered...\nItem Name: %sItem Weight: %sEmail: %sThreshold): %s>> ", Item_Name, Item_Weight, Threshold);
  fgets(yn, 3, stdin);
  if (yn[0] == 'y') {
    break;
    }
  }
  fprintf(fp, *Threshold + "\n");
  fprintf(fp, *Item_Weight + "\n");
  fprintf(fp, *Item_Name + "\n");
  fclose(fp);
}
