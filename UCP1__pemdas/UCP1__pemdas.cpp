//1.contoh deklarasi intejer
// Variabel Integer:umur 
// Variabel String: nama
// Variabel Float : tinggi_badan

//2.Prosedur (Procedure):
//def greet_user(name):

//3, p = Point(10, 20) membuat objek point


//4. prosedur 
// def greet_user(name):
// fungsi
// def calculate_square(number):

//5. contoh looping untuk mencetak angka dari 1 hingga 5
// for i in range(1, 6):
// print(i)

#include <iostream>
#include <string>
using namespace std;
int main()
{

    char repeat;

    do {
        struct Kandidat
            string nama;
        int matematika;
        int inggris;
        string status;
    };

    Kandidat calon[20];
    for (int i = 0; i < 20; i++) {
        cout << "masukkan nama: ";
        cin >> calon[i].nama;

        cout << "masukkan nilai matematika: ";
        cin >> calon[i].matematika;

        cout << "masukkan nilai bahasa inggris: ";
        cin >> calon[i].inggris;
    }
    for (int i = 0; i < 20; i++) {

