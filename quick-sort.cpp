// #include<iostream>
// using namespace std;

// int partition(vector<int> &arr,int st,int end){
//     int idx=st-1,pivot =arr[end];
// }
// void quickSort(vector<int> &arr,int st,int end){
//     if(st<end){
//         int pivIdx=partition(arr,st,end);  //for first pivot 

//         quickSort(arr,st,pivIdx-1);  //for left half
//         quickSort(arr,pivIdx+1,end);  //for right half

//     }
// }
// int main(){
//     vector<int> arr={12,31,35,8,32,17};
//     quickSort(arr,0,arr.size()-1)
//     return 0
// }

// #include<iostream>
// using namespace std;
// int part(int arr[],int low,int high){
//     int pivot=arr[low];
//     int i=low+1;
//     int j=high;
//     do{
//         while(arr[i]<pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<j){
//             int temp;
//             temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//         }
//     }while(i<j);
//     int temp;
//     temp=arr[low];
    
    

// }

// #include<iostream>
// using namespace std;
// void Cybrom(int arr[],int s){
//     for(int i=1;i<s;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Cybrom(arr,n);
// }
// #include<iostream>
// using namespace std;
// void Cybrom(int arr[],int s){
//     for(int i=1;i<s;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<" ";

//     }
// }

// int main(){
//     int s;
//     cout<<"enter array size:";
//     cin>>s;
//     int arr[s];
//     cout<<"original array will be:"<<endl;
//     for(int i=0;i<s;i++){
//         cin>>arr[i];
//     }
//     Cybrom(arr,s);
// }