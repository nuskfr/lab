#include<iostream>
using namespace std;
int main(){
	int n, temp;
	cout<<"How many datas do you want to enter?";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		cout<<"\nPass "<<i+1<<":"<<endl;
		for(int k=0;k<n;k++){
			cout<<arr[k]<<" ";
		}
	}
	cout<<"\nThe sorted array is\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
