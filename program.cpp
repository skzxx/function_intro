/*Function: intro*/

#include <iostream>
#include <cmath>

int main () {
  int x; /*sebagai variabel input*/
  std::cout << "Masukan nilai yang akan di akar-kan" << std::endl;
  std::cin >> x; /*mengambil input user dari variabel x dengan tioe data integer*/
  float operator_function = sqrt(x); /*
  menggunakan variabel dengan tipe data tertentu untuk dijadikan fungsi sqrt(x) yang dimana sqrt(x) di import dari modul <cmath>
  */
  std::cout << "Nilai dari akar " << x << " adalah " << operator_function /*menampilkan si fungsi yang sudah di initialisasi*/ << std::endl;
  std::cin.get();
  return 0;
}