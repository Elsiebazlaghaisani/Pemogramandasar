#include <iostream>
using namespace std;



int main()
{

    int luas, keliling;
    int alas, tinggi, sisi;
    
    
 cout << "Aplikasi HitungLuas + Keliling Segitiga "<<endl;
    cout << "Masukan Alas= "; cin >> alas;
    cout << "Masukan Tinggi=  "; cin >> tinggi;
    cout << "Masukan Sisi= " ; cin >> sisi;
    
    
    
   luas = 0.5 * alas * tinggi ;
    cout << "Luas Segitiga= " <<luas <<endl;
    
    keliling = sisi + sisi + sisi;
    cout << "Keliling Segitiga= "<<keliling<<endl;
   
    



}