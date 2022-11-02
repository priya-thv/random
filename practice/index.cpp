#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	int index=0,element;
	cout<<"enter a element:";
	cin>>element;
	
	
	
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			index=i;
			
		}cout<<index;
	}
           
	return 0;
}
