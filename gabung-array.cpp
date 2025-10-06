#include <iostream>

using namespace std;

int main() {
    int arrayA[] = {10, 20, 30, 40, 50};
    int arrayB[] = {60, 70, 80};

    int sizeA = sizeof(arrayA) / sizeof(arrayA[0]);
    int sizeB = sizeof(arrayB) / sizeof(arrayB[0]);

    int sizeGabungan = sizeA + sizeB;
    int arrayGabungan[sizeGabungan];

    for (int i = 0; i < sizeA; i++) {
        arrayGabungan[i] = arrayA[i];
    }

    for (int i = 0; i < sizeB; i++) {
        arrayGabungan[sizeA + i] = arrayB[i];
    }

    cout << "Array Gabungan: ";
    for (int i = 0; i < sizeGabungan; i++) {
        cout << arrayGabungan[i] << " ";
    }
    cout << endl;

    return 0;
}