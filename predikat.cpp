#include <iostream>
using namespace std;


int main()
{
  


   int nilai;
    cout << "Masukan Nilai"; cin >> nilai;
    if (nilai > 90){
      cout << " A ";
    } else if (nilai > 85) {
        cout << " AB ";
    } else if (nilai > 80) {
        cout << " B ";
    } else if (nilai >= 75) {
        cout << " C ";
    } else if (nilai < 75) {
        cout << " D ";
        
    } else {
       cout << " Tidak Lulus ";
    }
    
}