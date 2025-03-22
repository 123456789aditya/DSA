// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<pair<int,string>>v;
//     int rollno,n;
//     string fname;
//     cout<<"enter the number of records"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"enter ur rollno."<<endl;
//         cin>>rollno;
//         cout<<"enter ur name"<<endl;
//         cin>>fname;
//         v.push_back(make_pair(rollno,fname));
//     }
//     cout<<"Results are:"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" : "<<v[i].second<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<tuple>
// int main(){
//     tuple<int, string ,int>s{1,"adi",100};
//     cout<<"rollnumber is:"<<get<0>(s)<<endl;
//     cout<<"name is:"<<get<1>(s)<<endl;
//     cout<<"my roll no is"<<get<2>(s)<<endl;

// }

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// int main(){

//     vector<int>v{2,1,2,5,4,4,1,8};
//     sort(v.begin(),v.end());
//     int x=1;
//     for(int a=1;a<v.size();a++){
//         if(v[x-1]!=v[a]){
//             v[x]=v[a];
//             x++;
//         }
//     }
//     for(int i=0;i<x;i++){
//         cout<<v[i];
//     }
// }

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<pair<string,int>>v;
    int rollno,n;
    string name;
    cout<<"enter how many records"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter rollno"<<endl;
        cin>>rollno;
        cout<<"enter name"<<endl;
        cin>>name;
        v.push_back(make_pair(name,rollno));
    }
    cout<<"results are"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" : "<<v[i].second<<endl;
    }
}