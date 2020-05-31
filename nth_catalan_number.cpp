#include <iostream>
using namespace std;
int main() {
    long long int arr[50];
    long long int len = 2;
    arr[0] = 1, arr[1] = 1;
    int input;
    cin >> input;
    for (int i=2;i<input;i++) {  
        arr[i] = 0;
        for (int j=0;j<i;j++) { 
            arr[i] += arr[j] * arr[i-j-1]; 
        }
        cout << arr[i] << "\n";
    }
    cout << arr[input] << "\n";
    return 0;
}
