#include <stdio.h>
#include <stdlib.h>

int saya_global;
int saya_global_berisi = 50;


int tambah(int x, int y) {
  int sum = 0;
  sum = x + y;
  return sum;
}

int kurang(int x, int y) {
  int hasil = 0;
  hasil = x - y;
  return hasil;
}

int main(int argc, char **argv) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("Hasil tambah %d dan %d adalah %d\n", a,b,tambah(a,b));
  printf("Hasil kurang %d dan %d adalah %d\n", a,b,kurang(a,b));

  getchar();
}

