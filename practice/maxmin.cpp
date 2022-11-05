#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int sum=0,sum1=0,sum2=0;
 
    vector<int>a(5);
 
 
     for(int i=0;i<5;i++){
        cin>>a[i];
 
 
     }int max=a[0];
     for(int i=0;i<5;i++){
       if(a[i]>max){
        max=a[i];
 
       }
 
     }int min=a[0];
     for(int i=0;i<5;i++){
 
        if(a[i]<min){
            min=a[i];
        }
     }for(int i=0;i<5;i++){
            sum=sum+a[i];
        }
        sum1=sum-max;
        sum2=sum-min;
        cout<<sum1<<" "<<sum2<<endl;
 
     return 0;
 
}
