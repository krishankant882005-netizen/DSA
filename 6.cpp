#include <iostream>
using namespace std;
int main() {
    int arr[] = {3,2,8,4,9,1,5,7};
    int n = 8;
    for(int i = 0; i < n - 1; i++){
        for(int j= 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}