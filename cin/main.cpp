#include <iostream>

using namespace std;

int main()
{

    cout << "--------------------------------------------------------------------- \n\n";
    cout << "\t\t INTRODUCE MY SELF \n \n" << endl;

    string nama, nim;
    int umur;
    float tb;
    char jk;

    cout << "\tMasukan Nama           : ";
    getline (cin, nama);

    cout << "\tMasukan NIM            : ";
    cin >> nim;

    cout << "\tMasukan Umur           : ";
    cin >> umur;

    cout << "\tTinggi Badan           : ";
    cin >> tb;
    cout << "\n";

    cout << "\tSelamat Datang " << nama << ", MOHON DICEK!!!" << endl;
    cout << "\tNIM anda adalah " << nim << "." << endl;
    cout << "\tUsia anda sekarang " << umur << " tahun." << endl;
    cout << "\ttinggi badan anda " << tb << " cm." << endl;

    cout << "---------------------------------------------------------------------";
    return 0;
}
