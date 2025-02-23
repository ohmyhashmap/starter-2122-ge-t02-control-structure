// 11S24039 - Christian Alberto Sitohang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int a = 0, count = 0, bil_pertama = 0;
  char operand;
  scanf(" %c", &operand); // Membaca operator pertama
  if (operand == '*')
  {
    bil_pertama = 1;
  }
  while (count < 4)
  {
    scanf("%d", &a); // input angka
    if (a == -1)
    { // Jika input -1, berhenti
      printf("0\n");
      break;
    }
    count++;
    if (operand == '+') // penjumlahan
    {
      bil_pertama += a;
    }
    else if (operand == '-') // pengurangan
    {
      bil_pertama -= a;
      bil_pertama = -bil_pertama;
    }
    else if (operand == '*') // perkalian
    {
      bil_pertama *= a;
    }
    printf("%d\n", bil_pertama);
  }
  return 0;
}