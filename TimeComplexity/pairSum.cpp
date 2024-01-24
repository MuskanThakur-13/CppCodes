// //Pair sum in array
// You have been given an integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.

// Note:
// Given array/list can contain duplicate elements. 

#include<bits/stdc++.h>
using namespace std;
//T.C=O(nlogn)
//S.C=O(1)

int pairSum(int *arr, int n, int num)
{
	sort(arr,arr+n);
	int start=0;
	int end=n-1;
	int numpairs=0;

	while(start<end){

		if(arr[start]+arr[end] > num){
			end--;
		}
		else if(arr[start]+arr[end] < num){
			start++;
		}
		else{
			int elementStart=arr[start];
			int elementEnd=arr[end];

			if(elementStart == elementEnd){
				int totalEle=(end-start)+1;
				numpairs +=(totalEle * (totalEle-1)/2);
				return numpairs;
			}

			int tempstart=start+1;
			int tempend=end-1;

			while(tempstart <= tempend && arr[tempstart] == elementStart){
				tempstart +=1;
			}

			while(tempend >= tempstart && arr[tempend] == elementEnd){
				tempend -=1;
			}

			int totalelementstart=(tempstart - start);
			int totalelementend=(end-tempend);

			numpairs +=(totalelementstart *totalelementend);

			start=tempstart;
			end=tempend;

		}
	}
	return numpairs;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}