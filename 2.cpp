// Array insertion
#include <iostream>
using namespace std;
int main() {
    int arr[] = {21,45,56,86,22};
    int n = 5;
    int position = 2;
    int value = 19;
    for(int i = n;  i < position; i-- ) {
        arr[i] = arr[i -1];
    }
    arr[position] = value;
    n++;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}