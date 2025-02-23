// 11S24039 - Christian Alberto Sitohang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int harga_buku, jumlah_buku;
  double total_pembelian;
  scanf("%d %d", &jumlah_buku, &harga_buku);
  total_pembelian = harga_buku * jumlah_buku;
  if (total_pembelian > 500000)
  {
    printf("%.2f\n", total_pembelian * .15); // total harga = 5 * 50000 = 250000
    printf("%.2f\n", total_pembelian * .85); // 100 % total harga - 15 % total diskon  = 85 % total harga
  }
  else if (total_pembelian >= 100000)
  {
    printf("%.2f\n", total_pembelian * .1);
    printf("%.2f\n", total_pembelian * .9);
  }
  else if (total_pembelian > 50000)
  {
    printf("%.2f\n", total_pembelian * .05);
    printf("%.2f\n", total_pembelian * .95);
  }
  else
  {
    printf("---\n");
    printf("%.2f\n", total_pembelian);
  }

  return 0;
}
