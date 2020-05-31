#include<iostream>
using namespace std;
/**
* Bell(n) = summation of S(n, k), where k = 1 to n
* B(1) = S(1, 1) = 1
* B(2) = S(2, 1) + S(2, 2) = 1 + 1 // {1,2} and {1}, {2}
* B(3) = S(3, 1) + S(3,2) + S(3,3) = 1 + 3 + 1 = 5 // {1, 2, 3},     {{1,2}, {3}}, {{1,3}, {2}}, {{2,3}, {1}},    {{1}, {2}, {3}}
*/

/**
 * 1
 * 1 2
 * 2 3 5
 * 5 7 10 15
 * 15 20 27 37 52
 * 
 */
int main() {
    
    return 0;
}