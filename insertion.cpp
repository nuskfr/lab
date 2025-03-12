#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"How many datas do you want to enter?\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the data\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    int	temp=arr[i];
	    int j=i-1;
		while (j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
       	}
       	arr[j+1]=temp;
		cout<<"\nPass "<<i<<":"<<endl;
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
