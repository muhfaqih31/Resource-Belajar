#include <stdio.h>
#include <string.h>

void CetakInput(char *masukkan) {
  char buffer[20];
  strcpy(buffer, masukkan);
  printf("\n\n%s\n\n", buffer);
}

int main(int argc, char **argv) {
  CetakInput(argv[1]);
  return 0;
}
