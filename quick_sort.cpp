#include <iostream>
#include <vector>
using namespace std;

int parti(vector<int>&arr,int start_index,int end_index){
    int i=start_index-1;
    int pivot=arr[end_index];
    for(int j=start_index;j<end_index;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end_index]);
    return i+1;
}

void quick_sort(vector<int>&arr,int start_index,int end_index){
    if(start_index<end_index){
        int pivot_index=parti(arr,start_index,end_index);
        quick_sort(arr,start_index,pivot_index-1);
        quick_sort(arr,pivot_index+1,end_index);
    }
}

int main(){
	int size=5;
	vector<int>array(size);
	array={4,91,9,3,6};
	quick_sort(array,0,size-1);
	for(int i=0;i<5;i++){cout<<array[i]<<" ";}
	return 0;
}