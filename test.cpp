#include <iostream>
#include <vector>
#include <cstdlib>	
using namespace std;

void heapify(vector<int>&arr,int index,int heap_size){
	int i=index;
	while(true){
		int largest=i;
		int left_child=2*i+1;
		int right_child=2*i+2;

	if(left_child<heap_size&&arr[left_child]>arr[largest]){largest=left_child;}
	if(right_child<heap_size&&arr[right_child]>arr[largest]){largest=right_child;}
	if(largest==i)break;
	swap(arr[i],arr[largest]);
	i=largest;
	}
}

void heapsort(vector<int>& arr, int size) {
    while (size > 1) {
        swap(arr[0], arr[size - 1]);
        size--;
        heapify(arr, 0, size);
    }
}


int main(){
	int size=5;
	vector<int>array(size);
	array={2,8,3,5,6};
	
	heapify(array,0,array.size());
	
        heapsort(array,array.size());
	for(int i=0;i<5;i++){cout<<array[i]<<" ";}
	return 0;
}
