// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     pair<int,string>p1;
//     p1=make_pair(101,"aditya");
//     cout<<"name"<<p1.second<<endl;
//     cout<<"roll no."<<p1.first<<endl;


// }

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<pair<int,string>>v;
//     int rollno,n;
//     string name;
//     cout<<"enter how many records"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"enter roll number"<<endl;
//         cin>>rollno;
//         cout<<"enter name"<<endl;
//         cin>>name;
//         v.push_back(make_pair(rollno,name));
//         //v.push_back({rollno,name})

//     }
//     cout<<"results are"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<":"<<v[i].second<<endl;
//     }
// }




// #include<iostream>
// using namespace std;
// #include<vector>
// #include<tuple>
// int main(){

//     tuple<int,string,int>student{101,"joy",11};
//     cout<<"rollno"<<get<0>(student)<<endl;
//     cout<<"name"<<get<1>(student)<<endl;
//     cout<<"marks"<<get<2>(student)<<endl;
// }
    

//Nested Vector...

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     int val;
//     vector<int>v1;
//     for(int i=0;i<v1.size();i++){
//         cout<<"enter value"<<endl;
//         cin>>val;
        
//     }
// }

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// bool Cybrom(int a,int b)
// {
//     return a>b;
// }
// int main(){
//     vector<int>v{2,1,5,4,6};
//     sort(v.begin(),v.end());
//     for(auto p:v)
//     {
//         cout<<p<<"\n";
//     }
//     cout<<[](int a,int b){return a>b;} (4,20);
//     cout<<"\n";
//     sort(v.begin(),v.end(),less<int>());
//     sort(v.begin(),v.end(),greater<int>());
//     sort(v.begin(),v.end(),[](int a,int b){return a>b;});
//     for(auto p:v)
//     {
//         cout<<p<<"\t";
//     }

// }

//inbult function..
//all_of();none_of(),any_of();..it returns boolean

// auto p=[] (int a,int b) {return a+b;};

//multiply 10 in each element of 2 vectors and add them.

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// int main(){
//     vector<int>v1{1,4,5,8};
//     vector<int>v2{2,1,1};
//     int x=0;
//     int y=0;
//     for(int i=0;i<v1.size();i++){
//         x=x*10+v1[i];

//     }
//     for(int j=0;j<v2.size();j++){
//         y=y*10+v2[j];
//     }
//     cout<<"result="<<x+y;
// }



//remove all duplicate values from the vector.

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// int main(){
//     vector<int>v{2,1,2,4,5,4,1,8};
//     sort(v.begin(),v.end());
//     int x=1;
//     for(int a=1;a<v.size();a++){
//         if(v[x=1]!=v[a]){
//             v[x]=v[a];
//             x++;
//         }
//     }
//     for(int i=0;i<x;i++){
//         cout<<v[i]<<'\t';
//     }
// }

//STACK
//it follows LIFO.last in first out.
//only four func used PUSH(),POP(),EMPTY(),TOP().
// we cant show stack on our database.

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<stack>
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(4);
//     st.push(5);
//     st.push(11);
//     st.push(3);
//     cout<<"result"<<st.empty()<<"\n";
//     cout<<st.top()<<"\n";
//     while(!st.empty()){
//         cout<<st.top()<<"\n";
//         st.pop();
//     }
//     cout<<"result="<<st.empty()<<"\n";

// }


//uses of stack

//#include<iostream>
// using namespace std;
// int valid(string s)
// {
//     if(s.size()>4)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     string s;
//     cout<<"enter name"<<endl;
//     cin>>s;
//     if(valid(s)){
//         cout<<"win";
//     }
//     else{
//         cout<<"loose";
//     }
// }


#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int valid(string s)
{
    if(s.size()>4)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string s;
    cout<<"enter name"<<endl;
    cin>>s;
    if(valid(s)){
        cout<<"win";
    }
    else{
        cout<<"loose";
    }
}