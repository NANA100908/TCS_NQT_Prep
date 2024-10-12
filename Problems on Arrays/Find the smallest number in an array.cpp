-----------------------------------------------------------------------------Question----------------------------------------------------------------------------------
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:
  
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.

-----------------------------------------------------------------------------Solution---------------------------------------------------------------------------------

---------------------------------------------------------------------------1st Approach----------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, min;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<"The smallest element in the array is: "<<min<<endl;
   	return 0;
}

-----------------------------------------------------------------------------Complexity----------------------------------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(n)

---------------------------------------------------------------------------2nd Approach----------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main()
{
    int n, min;
    cin >> n;
    cin >> min; // read the first element and assume it's the smallest

    for(int i=1;i<n;i++){
        int temp;
        cin >> temp;
        if(temp < min){
            min = temp;
        }
    }
    cout<<"The smallest element in the array is: "<<min<<endl;
    return 0;
}
-----------------------------------------------------------------------------Complexity----------------------------------------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(1)
