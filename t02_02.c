// 11S24039 - Christian Alberto Sitohang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  short int pilihan;
  scanf("%hd", &pilihan);
  switch (pilihan)
  {
  case 1:
    printf("staple food\nyou need side dishes");
    break;
  case 2:
    printf("side dishes\nstaple food\nyou need vegetables");
    break;
  case 3:
    printf("vegetables\nside dishes\nstaple food\ngood");
    break;
  case 4:
    printf("fruits\nvegetables\nside dishes\nstaple food\nvery good");
    break;
  case 5:
    printf("milk\nfruits\nvegetables\nside dishes\nstaple food\nperfect");
    break;
  default:
    break;
  }

  return 0;
}
