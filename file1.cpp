#include <iostream>
using namespace std;

int arr[20];        //membuat array dengan panjang data 20
int n;              //membuat variable inputan n

void input (){ //procedure input
    while (true){
        cout << "masukkan jumlah data pada array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\narray ridak boleh lebih dari 20\n";
        }
    }
    cout << endl;
}