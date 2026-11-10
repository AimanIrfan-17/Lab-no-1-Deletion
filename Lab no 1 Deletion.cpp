#include <iostream>
using namespace std;
const int CAPACITY = 10;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "   (size = " << size << ")" << endl;
}
int deleteAt(int arr[], int size, int pos) {
    if (size == 0) {                      
        cout << "Array is empty\n";
        return size;
    }
    if (pos < 0 || pos >= size) {         
        cout << "Invalid position\n";
        return size;
    }
    for (int i = pos; i < size - 1; i++)
        arr[i] = arr[i + 1];
    return size - 1;                      
}
int main() {
    int arr[CAPACITY] = {10, 20, 30, 40, 50};
    int size = 5;
    cout << "Original:          ";
    display(arr, size);
    size = deleteAt(arr, size, 0);          
    cout << "Delete first:      ";
    display(arr, size);
    size = deleteAt(arr, size, 1);         
    cout << "Delete index 1:    ";
    display(arr, size);
    size = deleteAt(arr, size, size - 1);   
    cout << "Delete last:       ";
    display(arr, size);
    size = deleteAt(arr, size, 10);         
    return 0;
}
