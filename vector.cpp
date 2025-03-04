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

#include<iostream>
using namespace std;
#include<vector>
int main(){
    int val;
    vector<int>v1;
    for(int i=0;i<v1.size();i++){
        cout<<"enter value"<<endl;
        cin>>val;
        
    }
}