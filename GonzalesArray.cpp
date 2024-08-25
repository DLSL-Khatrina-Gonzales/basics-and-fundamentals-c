#include <iostream>
using namespace std;

int main() {
    int arrayOne[10] = {};
    int arrayTwo[10] = {};
    int mergedArray[20] = {};
    int i, j;

    cout << "Input 10 Elements for the First Array: " << endl;
    for (i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arrayOne[i];
    }

    cout << "\nInput 10 Elements for the Second Array: " << endl;
    for (i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arrayTwo[i];
    }

    for (i = 0; i < 10; i++) {
        mergedArray[i] = arrayOne[i];
    }
    for (j = 0; j < 10; j++, i++) {
        mergedArray[i] = arrayTwo[j];
    }
   
    for (i = 0; i < 19; i++) {
        for (j = i + 1; j < 20; j++) {
            if (mergedArray[i] < mergedArray[j]) {
               
                mergedArray[i] = mergedArray[i] + mergedArray[j];
                mergedArray[j] = mergedArray[i] - mergedArray[j];
                mergedArray[i] = mergedArray[i] - mergedArray[j];
            }
        }
    }

    cout << "\nMerged Array in Descending Order: " << endl;
    for (i = 0; i < 20; i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}