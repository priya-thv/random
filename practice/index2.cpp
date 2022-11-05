#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int arr[n];
 
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
 
	int index=0,element;
 
	cin>>element;
 
 
 
	for(int i=0;i<n;i++){
		if(arr[i]==element){
		cout<<i;	
 
		}
	}
 
	return 0;
}
