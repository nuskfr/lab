#include<iostream>
using namespace std;
int main(){
	int n, temp;
	cout<<"How many datas do you want to enter?\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the data\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
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
