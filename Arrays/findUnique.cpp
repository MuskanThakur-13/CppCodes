//Find Unique 

//You have been given an integer array(ARR) of size N.
//Now, in the given array, all numbers are present twice or more than twice except only one number is present only once.
//You need to find and return that number which is unique in the array.
#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[], int size)
{
	// 1)Brute Force Approach
	// for(int i=0;i<size;i++){
	// 	int count=0;
	// 	for(int j=0;j<size;j++){
	// 		if(i!=j && arr[i]==arr[j]){
	// 			count++;
	// 			break;
	// 		}
	// 	}
	// 	if(count == 0){
	// 		return arr[i];
	// 	}
	// }

	// 2)Best Approach-Using Map
	//Time Complexity: O(N*logM) + O(M), where M = size of the map i.e. M = (N/2)+1. N = size of the array
	//Space Complexity: O(M) as we are using a map data structure. Here M = size of the map i.e. M = (N/2)+1.


	// map<int,int> mp;
	// for(int i=0;i<size;i++){
	// 	mp[arr[i]]++;
	// }

	// for (auto it:mp){
	// 	if(it.second == 1){
	// 		return it.first;
	// 	}
	// }
	
	//3) Optimal approach-Using xor
    // same number will result in zero for xor
    // 0 xor 2=2;

	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	return ans;
    
}


int main()
{

	
		int size;
		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	

	return 0;
}