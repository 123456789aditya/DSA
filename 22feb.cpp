//template is a genralized format of any program that may be function or class
//two type sof template
// Function template
// Class template

// #include<iostream>
// using namespace std;
// template<typename t1>
// t1 sum(t1 a,t1 b){
//     return a+b
// }
// template<typename x1,typename x2>
// x1 multiply(x1 x,x2 y){
//     return x*y;
// }
// int main(){
//     cout<<sum(8.3,9.9);
// }

// #include<iostream>
// using namespace std;
// template<typename v1>
// class Cybrom{
//     v1 a;
//     public:Cybrom(v1 x){
//         a=x;
//     }
//     v1 show(){
//         return a+1;
//     }
// };
// int main(){
//     Cybrom<int>obj(34);
//     cout<<obj.show();
// }

// #include<iostream>
// using namespace std;
// namespace Cybrom{
//     int a=90;
//     int b=100;
//     void show(){
//         cout<<"result="<<a+b;
//     }
//     class Bhopal{
//         public:int sqr(int a){
//             return a*a;
//         }
//     }
//     class iostreamx{
//         public:void fun(){
//             cout<<"\n fun\n";
//         }

//     }coutx;
// }

// using namespace Cybrom;
// int main(){
//     cout<<a<<"\n";
//     cout<<b<<"\n";
//     show();
//     Bhopal b;
//     cout<<"\n";
//     cout<<b.sqr(8);
//     coutx.fun();
// }


// #include<iostream>
// using namespace std;
// #include<array>
// int main(){
//     array<int,6>arr{10,20,30,40,50,60};
//     cout<<"size of array="<<arr.size()<<"\n";
//     for(int i=0;i<arr.size();i++){
//         cout<<arr.at(i)<<"\t";
//     }
//     cout<<"first value of array is="<<arr.front();
//     cout<<"last value of array is="<<arr.back();
// }


//how to find maximum and min element in an array..

// #include<iostream>
// using namespace std;
// #include<array>
// #include<algorithm>
// int main(){
//     array<int,6>arr{10,20,30,40,50,60};
//     sort(arr.begin(),arr.end());
//     cout<<"min="<<arr.front();
//     cout<<"max="<<arr.back();
//      cout<<"size of array="<<arr.size()<<"\n";
//      for(int i=0;i<arr.size();i++){
//          cout<<arr.at(i)<<"\t";
//      }
//      cout<<"first value of array is="<<arr.front();
//      cout<<"last value of array is="<<arr.back();
//  }



 #include<iostream>
 using namespace std;
 #include<array>
 #include<algorithm>
 int main(){
     array<int,6>arr{10,20,30,40,50,60};
     sort(arr.begin(),arr.end());
     cout<<"min="<<arr.front();
     cout<<"max="<<arr.back();
      cout<<"size of array="<<arr.size()<<"\n";
      for(int i=0;i<arr.size();i++){
          cout<<arr.at(i)<<"\t";
      }
      cout<<"first value of array is="<<arr.front();
      cout<<" second last value of array is="<<*(arr.end()-2);
      //cout<<arr[arr.size()-2];
  }

