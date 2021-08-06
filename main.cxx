#include <iostream>
#include <stdio.h>

using namespace std;

void kalku();
void logo();

int main(){
 while(1){
  logo();
  kalku();
 }
}

void kalku(){
 int x;
 int y;
 int hasil;
 cout << "masukan angka pertama: ";
 cin >> x;
 cout << "masukan angka kedua: ";
 cin >> y;
 hasil=x+y;
 cout << "\033[41mhasil: " << hasil << "\033[0m\n";
}
void logo(){
 cout << "\033[32m###################################\n";
 cout << "#      KALKULATOR PENJUMLAHAN     #\n";
 cout << "##################################\n";
}
