#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "UserInfo.h"
#include "ECinfo.h"
#include "Inventory.h"

int main() {

  FILE *fp;
  fp = fopen("Data/User.txt", "r");
  if (fp == NULL) {
    printf("\n\nERROR opening FILE\n\n");
  }
  if (fgetc(fp) == -1) {
    printf("No Data\n\n");
    userinfo();
    ECinfo();
    inventory();
  }




  return 1;
}
