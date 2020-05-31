// C++ program to find n'th Ugly number 
#include <iostream> 
using namespace std; 

/* Function to get the nth ugly number*/
unsigned getNthUglyNo(unsigned n) 
{ 
	int arr[n]; // To store ugly numbers 
	int i2 = 0, i3 = 0, i5 = 0; 
	int next_multiple_of_2 = 2; 
	int next_multiple_of_3 = 3; 
	int next_multiple_of_5 = 5; 
	int next_ugly_no = 1; 

	arr[0] = 1; 
	for (int i=1; i<n; i++) 
	{ 
        next_ugly_no = min(next_multiple_of_2, 
                            min(next_multiple_of_3, 
                                next_multiple_of_5)); 
        arr[i] = next_ugly_no; 
        if (next_ugly_no == next_multiple_of_2) 
        { 
            i2 = i2+1; 
            next_multiple_of_2 = arr[i2]*2; 
        } 
        if (next_ugly_no == next_multiple_of_3) 
        { 
            i3 = i3+1; 
            next_multiple_of_3 = arr[i3]*3; 
        } 
        if (next_ugly_no == next_multiple_of_5) 
        { 
            i5 = i5+1; 
            next_multiple_of_5 = arr[i5]*5; 
        } 
	} 
	return next_ugly_no; 
} 

/* Driver program to test above functions */
int main() 
{ 
	cout << getNthUglyNo(150); 
	return 0; 
} 
