#include <iostream.h>
#include <conio.h>
int main ()
{
	char Nama[20], Kode;
   int Pil, Harga, JumlahBelanja, Discount, TotalBelanja, TotalBayar, Bayar, Kembalian;
	cout <<"Masukkan Nama Anda : ";
   cin>>Nama;
   cout<<endl;
   cout<<"Selamat Datang Di Toko Jepara";
   cout<<endl;
   cout<<"Nama Barang : \n";
   cout<<"A. Kursi \n";
   cout<<"B. Meja \n";
   cout<<"C. Lemari \n";
   cout<<"Pilih Barang Yang Yang Ingin Dibeli (A - C) : "; cin>>Kode;
   switch(Kode)
{
	case 'A':
   	Harga=1000000;
      cout<<"Kursi \n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;
   case 'B':
   	Harga=2000000;
   	cout<<"Meja \n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;
   case 'C':
   	Harga=2500000;
      cout<<"Lemari \n";
      cout<<"Harga Satuan : Rp. "<<Harga<<endl;
      break;}

   cout<<"Jumlah Barang : ";cin>>JumlahBelanja;
   TotalBelanja = JumlahBelanja * Harga;
	cout<<"Kode Barang Yang Dibeli  "<<Kode<<endl;
   cout<<"Total Pembelanjaan Adalah :Rp. "<<TotalBelanja<<endl;
   if (TotalBelanja >= 10000000)
    {Discount = TotalBelanja * 20/100;}
   else
    {Discount = 0;}
   cout<<"Discount = Rp. " <<Discount<<endl;
   TotalBayar = TotalBelanja - Discount;
   cout<<"Total Yang Harus Dibayar : Rp. "<<TotalBayar<<endl;
   cout<<"Masukkan Uang Pembayaran :" ; cin >>Bayar;
   Kembalian = Bayar - TotalBayar;
   cout<<"Kembalian :Rp. "<<Kembalian<<endl;
   cout<<"Terimakasih Telah Membeli Di Toko Kami"<<endl;
   getch(); }



