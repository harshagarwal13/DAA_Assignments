#include<iostream>
using namespace std;
void findseq(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=0; k<n; k++){
				if(arr[i] + arr[j] == arr[k]){
					cout<<i+1<<","<<j+1<<","<<k+1<<endl;
					return;
				}
			}
		}
	}
	cout<<"No sequence found"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		findseq(arr, n);
	}
}