

#include <iostream>
using namespace std;

void ilkElemaniSil(int arr[], int& n) {
    if (n > 0) {
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
}

int main() {
    const int maxSize = 10; // dizinin boyutu
    int arr[maxSize] = { 1, 2, 3, 4, 5 }; 

    int n = 5; 

    // �lk ��eyi kald�rmadan �nce diziyi g�r�nt�ler
    cout << "ilk elemani kaldirmadan onceki dizi: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Remove the first element
    ilkElemaniSil(arr, n);

    // �lk eleman� ��kard�ktan sonra diziyi g�sterir
    cout << "ilk elemani �ikardiktan sonraki dizi: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




