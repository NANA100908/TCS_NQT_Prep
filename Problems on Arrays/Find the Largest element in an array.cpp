-------------------------------------------------------------------------Question-------------------------------------------------------------------------------------
Problem Statement: Given an array, we have to find the largest element in the array.

Examples
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2:
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 
-------------------------------------------------------------------------Solution-------------------------------------------------------------------------------------
  
------------------------------------------------------------------------Approach 1------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , max;
	cin>>n>>max;
	for(int i = 1 ; i <= n ; i++){
		int temp;
		cin>>temp;
		if(max<temp) max=temp;
	}
	cout<<max<<" is the largest element in the array.";
    return 0;
}
-----------------------------------------------------------------------Complexity-------------------------------------------------------------------------------------
Time Complexity: O(N)
Space Complexity: O(1)
  
