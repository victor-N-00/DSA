#include <iostream>
#include <vector>
using namespace std;

void max_heapify(vector<int>&arr,int index,int heap_size){
	int i=index;
	int largest=i,left_child=2*i+1,right_child=2*i+2;
	
	if(left_child<heap_size && arr[left_child]>arr[largest]){
		largest=left_child;
	}if(right_child<heap_size && arr[right_child]>arr[largest]){
		largest=right_child;
	}
	if(largest==index){return;}
	swap(arr[largest],arr[i]);
	max_heapify(arr,largest,heap_size);
}


void heapsort(vector<int>&arr,int size){
	//Build max heap first
	for(int i=size/2;i>=0;i--)max_heapify(arr,i,size);

	for(int i=size-1;i>=1;i--){
		swap(arr[0],arr[i]);
		size--;
		max_heapify(arr,0,size);
	}
}

int main(){
	int size=5;
	vector<int>array(size);
	array={4,91,9,3,6};
	heapsort(array,size);
	for(int i=0;i<5;i++){cout<<array[i]<<" ";}
	return 0;
}
