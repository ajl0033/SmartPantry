#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "PSnventory.h"

void PSinventory() {
  FILE *fp;
  fp = fopen("Data/Inventory.txt", "w+");
  if (fp == NULL) {
    printf("\n\nERROR opening FILE\n\n");
  }
}
