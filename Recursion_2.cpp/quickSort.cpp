// Quick sort
// Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.
// Note :
// Make changes in the input array itself.

#include<bits/stdc++.h>
using namespace std;
/*Time Complexity : O('N' * log('N'))
Space Complexity : O(log('N'))*/
int partitionArray(int input[], int start, int end) {
	int pivot=input[start];
	int cnt=0;
	for (int i=start+1;i<= end;i++){
		if(input[i] <= pivot){
			cnt++;
		}
	}

	//place pivot at right index
	int pivot_index=start+cnt;
	swap(input[start],input[pivot_index]);

	//put all elements smaller than pivot at left part,and greater than pivot at right part

	int i=start;
	int j=end;

	while(i<pivot_index && j>pivot_index){
		if(input[i] <= input[pivot_index]){
			i++;
		}
		else if(input[j] > input[pivot_index]){
			j--;
		}

		else  if (i < pivot_index && j > pivot_index){
			swap(input[i++],input[j--]);
		}
	}

	return pivot_index;
}

void quickSort(int input[], int start, int end) {
	if(start>=end){
		return;
	}
	int p=partitionArray(input,start,end);
	quickSort(input, start, p-1);
	quickSort(input, p+1, end);

	
}