#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*pertemuan yang ketiga */
    int umur = 18;
    float tb = 176.5;
    string nim = "A11.2022.14656";
    char ub = 'L';
    int ATM = 200000;
    char jk = 'L';
    string ps = "Teknik Informatika";
    string nama = "Mohamad Adzka Fawaid";


    cout << "Data Diri \n" << endl;
    cout << "Nama                   : " << nama << endl;
    cout << "NIM                    : " << nim << endl;
    cout << "Umur                   : " << umur <<endl;
    cout << "Program Studi          : " << ps << endl;
    cout << "Jenis Kelamin          : " << jk << endl;
    cout << "Tinggi Badan           : " << tb << endl;
    cout << "Ukuran Baju            : " << ub << endl;
    cout << "Tabungan Uang          : " << ATM << endl;
    cout << "\n \n " << endl;



    printf("----------------------------------------------------------------- \n\n");
    printf("\t\tMasukan Data sesuai anda \n \n");

    string nm[50], nimm[20];
    int umurr;
    float tbadan;
    char jkelamin;

    printf(" \t Nama Lengkap            : ");
    scanf("%s",&nm);

    printf(" \t NIM                     : ");
    scanf("%s",&nimm);

    printf(" \t Umur                    : ");
    scanf("%d",&umurr);

    printf(" \t Tinggi Badan            : ");
    scanf("%f",&tbadan);

    printf(" \t Jenis Kelamin           : ");
    scanf(" %c",&jkelamin);

    printf("\n");
    printf("\t Nama anda %s, \n", nm);
    printf("\t NIM anda %s, \n", nimm);
    printf("\t Umur anda %d, \n", umurr);
    printf("\t Tinggi Badan anda %f, \n", tbadan);
    printf("\t Jenis Kelamin anda %c. \n", jkelamin);
    printf("\n");

    printf("----------------------------------------------------------------- \n");

    return 0;
}
