//METHOD (01) :

#include<iostream>
using namespace std;

int main(){

	int a[8] =  {2,3,4,3,2,4,4,4};

	for(int i=0;i<8;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] == a[j]){
				return i+1;
			}
		}
	}
	//if no repeating ele found in the array
	return -1;

}

//METHOD(02):


#include<iostream>
#include<map>
using namespace std;

int main(){

	int a[8] =  {2,3,4,3,2,4,4,4};

	unordered_map<int ,int> hash;

	for(int i=0;i<8;i++){
		hash[a[i]]++;
	}

	for(int i=0;i<hash.size();i++){

		if(hash[a[i]] > 1){
			return i+1;
		}
	}
	return -1;

}
