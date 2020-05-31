#include<iostream>
using namespace std;
/**
 * Initial states
 * S(1, 1) = 1
 * S(2, 1) = 1
 * S(2, 2) = 1 
 * 
 * S(3,2) = {{1}, {2, 3}}  {{2}, {1, 3}}  {{3}, {1, 2}} = 3
 * S(n, k) = k*S(n-1, k) + S(n-1, k-1) // Stirling numbers of second kind
 * Why? 
 * Consider S(2, 2) = {{1}, {2}}
 * When 3 is included, it can be part of any of the partition
 * {{1, 3}, {2}} and {{1}, {2, 3}}
 * 
 * Consider S(2, 1) = {1, 2}
 * When 3 is included, {{1, 2}, {3}} // we add 3 into single element partition
 */

int partitions(int n, int k) {

    if (k==0 || n== 0) {
        return 0;

    }

    if (k==1 || n== k) {
        return 1;
    }

    return k*partitions(n-1, k) + partitions(n-1, k-1);
}
int main() {
    
    
    int n=10;
    int s[n+1][n+1];
    s[1][1] = 1; // k == n
    s[2][1] = 1; // k == 1
    s[2][2] = 1; // k == n

    // this leads to brute force
    
    cout << partitions(3, 2);
    return 0;
}