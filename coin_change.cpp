#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MAX = 100;

int getNumberOfWays(int amount, int m) {

    int denomination[] = {2, 3, 5, 10};
    int arr[m+1][amount+2];
    memset(arr, 0, sizeof(arr));
    for (int i=0;i<=amount+2;i++) {
        if (i%denomination[0]) {
            arr[0][i] = 1;
        } else {
            arr[0][i] = 0;
        }
    }

    for (int i=1;i<m;i++){
        for (int j=0; j<=amount+1;j++) {
            if (denomination[i]>j) {
                arr[i][j] = arr[i-1][j];
            } else {
                arr[i][j] = arr[i-1][j] + arr[i][j - denomination[i]];
            }
        } 
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<=amount+1;j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return arr[m-1][amount+1];
}
int main() {
    int inputArr[4] = { 2, 3, 5, 10 };
    int input;

    for (int i=0;i<4;i++) {
        cin >> input;
        inputArr[i] = input;
    }
    cout << getNumberOfWays(15, 4) << endl;
    return 0;
}