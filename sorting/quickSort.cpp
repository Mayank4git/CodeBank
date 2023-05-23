#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){

	//choose pivot ele which at starting index (s)

	int pivotIndex = s;
	int pivotEle = arr[s];

	int count = 0;
	for(int i=s+1;i<=e;i++){
		if(arr[i] <= pivotEle){
			count++;
		}
	}

	int rightIndex = s+count;

	swap(pivotEle,arr[rightIndex]);
	pivotIndex = rightIndex;

	//check kro pivot k left mein sb small ele hein and right mein larger honge so
	int i = s;
	int j = e;
	while(i < pivotIndex && j > pivotIndex){

		while(arr[i] < pivotEle){
			i++;
		}

		while(arr[i] > pivotEle){
			j--;
		}

		// ek case hoga jb right mein chote and left mein bade ele bhi ho skte h tb

		if(i < pivotIndex && j > pivotIndex){//ye lgai h khi hum pivot prr stand na krte ho

			swap(arr[i], arr[j]);
		}
	}

	return pivotIndex;
}

void quicksort(int arr[], int s, int e){

	if(s >= e){
	    return;
	}

	int p = partition(arr,s,e);
	quicksort(arr,s,p-1);
	quicksort(arr,p+1,e);
}


int main(){
	int arr[] = {8,1,3,4,20,50,30};
	int n = 7;

	int s = 0;
	int e = n-1;
	quicksort(arr,s,e);
    cout << "array after quick sorting will be " << endl;
	for(int i=0;i<n;i++){
		cout << arr[i];
	}
	cout << endl;
}