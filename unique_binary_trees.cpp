#include<iostream>
using namespace std;
int main() {
    int numOfTrees[100];
    numOfTrees[0] = 1;
    numOfTrees[1] = 1;
    int input;
    cin >> input;
    for (int i=2;i<=input;i++) {
        for (int j=0;j<i;j++) {
            numOfTrees[i] += numOfTrees[j]*numOfTrees[i-j-1];
        }
    }
    cout << numOfTrees[4];
    return 0;
}