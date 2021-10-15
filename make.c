#include <zconf.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int check;
  check = geteuid();
  if (check == 0) {
    printf("make started");
    system("gcc setup.c -o setup && ./setup");
  }
}
