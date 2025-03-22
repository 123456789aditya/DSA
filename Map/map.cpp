// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>mp;
//     int roll,n;
//     string name;
//     cout<<"\nenter how many records\n";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"enter roll no"<<endl;
//         cin>>roll;
//         cout<<"enter name"<<endl;
//         cin>>name;
//         mp.insert({roll,name});
//     }
//     cout<<"records are"<<endl;
//     for(auto p:mp){
//         cout<<p.first<<" : "<<p.second<<"\n";
//     }
//     auto t=mp.find(2);
//     if(t!=mp.end()){
//         cout<<t->first<<" : "<<t->second;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
//     mp.erase(3);
//     cout<<"\nrecords after deletion are\n"<<endl;
//     for(auto p:mp){
//         cout<<p.first<<" : "<<p.second<<endl;
//     }

// }

//unordered map. its timing is much better than sorted map.
//we cants use complex data type in unordered map because it dosent have its own hashing function.

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<int,string>up;
//     up.insert({10,"anu"});
//     up.insert({101,"sunny"});
//     up.insert({73,"ravi"});
//     for(auto p:up){
//         cout<<p.first<<" , "<<p.second<<"\n";
//     }
// }

////Multi-map -: it supports duplicate value..

//we can delete duplicate value by 2 ways by using iterator and by value. by using iterator we can delete only one value and by using value we can delete multiple values.
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     multimap<int,string>mp;
//     mp.insert({10,'anu'});
//     mp.insert({101,'sunnty'});
//     mp.insert({'10','akj'});
//     mp.insert({14,'upi'});
//     mp.insert({10,'anu'});
//     for(p:mp){
//         cout<<p.first<<":"<<p.second;
        
//     }
// }










