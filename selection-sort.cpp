#include<iostream>
using namespace std;
int main(){
    int temp;
    int n;
   
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+j;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[i]=temp;
                arr[j]=arr[i];
            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}













