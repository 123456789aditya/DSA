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

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int x=0,y=0;
    vector<int>v1{1,4,5,8};
    vector<int>v2{2,1,1,7};
    for(int i=0;i<v1.size();i++){
        x=x*10+v1[i];
    }
    for(int j=0;j<v2.size();j++){

        y=y*10 + v2[j];
    }
    cout<<"sum will be:"<<x+y;
}