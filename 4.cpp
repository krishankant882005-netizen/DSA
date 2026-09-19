// Linear Search
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    int key = 50;
    int position = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            position = i;
            break;
        }
    }
    if(position != - 1) {
        cout << "Element found at index: " << position;
    } else {
        cout << "Element not found";
    }
    return 0;
}