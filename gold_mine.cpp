#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MAX = 100;

int getMaxGold(int gold[][MAX], int m, int n) 
{ 
    // Create a table for storing intermediate results 
    // and initialize all cells to 0. The first row of 
    // goldMineTable gives the maximum gold that the miner 
    // can collect when starts that row 
    int goldTable[m][n]; 
    memset(goldTable, 0, sizeof(goldTable)); 
  
    for (int col=n-1; col>=0; col--) 
    { 
        for (int row=0; row<m; row++) 
        {   
              int right = (col == n-1) ? 0 : gold[row][col+1];

              int right_down = (row == m-1) || (col == n-1) ? 0 : gold[row+1][col+1];
               
              int right_up = (row == 0) || (col == n-1) ? 0 : gold[row - 1][col+1];
              goldTable[row][col] = gold[row][col] + max(right, max(right_down, right_up));
        } 
    } 
  
    // The max amount of gold collected will be the max 
    // value in first column of all rows 
    int res = goldTable[0][0]; 
    for (int i=1; i<m; i++) 
        res = max(res, goldTable[i][0]); 
    return res; 
} 

int main() {
int gold[MAX][MAX]= { {1, 3, 1, 5}, 
        {2, 2, 4, 1}, 
        {5, 0, 2, 3}, 
        {0, 6, 1, 2} 
    }; 
    int m = 4, n = 4; 
    cout << getMaxGold(gold, m, n);
    return 0;
}