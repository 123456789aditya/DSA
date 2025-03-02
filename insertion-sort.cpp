/*#include<iostream>
using namespace std;
void bubles(int arr[],int s){
    int tmp;
    int cnt=0;
    bool t=true;
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            cnt++;
            if(arr[j]>arr[j+1]){
                tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
                t=false;
            }
        }
        if(t==true){
            break;
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\ncounter hit="<<cnt;
}
int main(){
    int arr[]={5,4,3,2,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n after applying bubble sort\n";
    bubles(arr,s);
}*/
/*#include<iostream>
using namespace std;
void bublesort(int arr[],int s){
    int temp;
    int cnt=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            cnt++;
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\ncount is:"<<cnt;
}
int main(){
    int arr[]={5,4,3,2,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nbefore applying bubble sort"<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nafter applying bubble sort"<<endl;
    bublesort(arr,s);
}*/

  

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=1;i<n;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

 #include<iostream>
 using namespace std;
 /*void printArr(int arr[],int n){
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }*/
 void InsSort(int arr[],int n){
     for(int i=1;i<n;i++){
         int current=arr[i];
         int previous=i-1;

         while(previous>0 && arr[previous]>current){
             arr[previous+1]=arr[previous];
             previous--;
         }
         arr[previous+1]=current;
     }
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }
 int main(){
     int n=5;
     int arr[]={4,1,5,2,3};
     cout<<"before sorting"<<endl;
     
     InsSort(arr,n);

 }


// #include<iostream>
// using namespace std;
// void insrt(int arr[],int s){
//     for(int i=0;i<s;i++){
//         int min=i;
//         while(min>=0 && arr[min]<arr[min-1]){
//             int tmp;
//             tmp=arr[min-1];
//             arr[min-1]=arr[min];
//             arr[min]=tmp;
//             min--;
//         }
//     }
//     cout<<"\nafter insertion\n";
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
// }
// int main(){
//     int arr[]={10,5,50,2,20};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
//     insrt(arr,s);
// }


                                                                                                                      




