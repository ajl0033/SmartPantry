//This class reads in emergency contact data and food unit information.
// With the data provided the function will determine if a food has reached its designated Threshold
//and if so the emergency contact will be notified through email.

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "LowSupplyAlert.h"


void LowSupplyAlert() {
  // Opening EmergencyContact.txt
  FILE *fp;
  fp = fopen("Data/EmergencyContact.txt", "r+");
  if (fp == NULL) {
    printf("\n\nEROR: no emergency contact found.\n\n");
  }


  char *User_FirstName = (char*)malloc(20);
  char *User_LastName = (char*)malloc(20);
  char *User_Email = (char*)malloc(40);
  char *User_PhoneNumber = (char*)malloc(12);

//Stores emergency contact data as usable variables
  fscanf(fp, "%s\n", &User_FirstName);
  fscanf(fp, "%s\n", &User_LastName);
  fscanf(fp, "%s\n", &User_Email);
  fscanf(fp, "%s\n", &User_PhoneNumber);

  // Opening Inventory.txt
  FILE *fa;
  fa = fopen("Data/Inventory.txt", "w+");
  if (fa == NULL) {
    printf("\n\nERROR opening FILE\n\n");
  }


  char *Item_Name = (char*)malloc(50);
  char *Item_Weight = (char*)malloc(20);
  char *Threshold = (char*)malloc(20);

//Stores food unit data as usable variables
  fscanf(fa, "%s\n", &Item_Name);
  fscanf(fa, "%s\n", &Item_Weight);
  fscanf(fa, "%s\n", &Threshold);


  char cmd[100]; //variable for system command

  char body[] = "An item has reached its supply threshold. Please visit the pantry to restock." // body of email

  char tempFile[100]; // temporary file to store email

  if(Item_Weight <= Threshold){ // if item weight is less than or equal to threshold, email is triggered
    //Send Alert

    strcpy(tempFile, tempnam("/tmp", "sendmail"));

    FILE *fa = fopen(tempFile, "w");
    fprintf(fa, "%s\n", body); //creates email file 
    fclose(fa);

    sprintf(cmd, "sendmail %s < %s", User_Email, tempFile); // creates system command to send email

    system(cmd); //executes the command

    return 0;

  }
}
