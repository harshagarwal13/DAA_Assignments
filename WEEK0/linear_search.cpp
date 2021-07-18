#include<iostream>
using namespace std;


bool linear_search(int *arr, int n, int a){
	int b=0;
	bool res = false;
	for(int i=0;i<n;i++){
		b++;
		if(arr[i] == a){
			res = true;
			break;
		}
		
	}
	cout<<"Total number of comparisons took place are  "<<b<<endl;
	if(res == true){
		return true;
	}
	else
		return false;
}


int main(){
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element you want to find in array"<<endl;
	int a;
	cin>>a;
	bool result = linear_search(arr, n, a);
	if(result){
		cout<<"Your element is present in the array"<<endl;
	}
	else
		cout<<"Your element is not present in the array"<<endl;

	return 0;
}