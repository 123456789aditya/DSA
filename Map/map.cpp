#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>mp;
    int roll,n;
    string name;
    cout<<"\nenter how many records\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter roll no"<<endl;
        cin>>roll;
        cout<<"enter name"<<endl;
        cin>>name;
        mp.insert({roll,name});
    }
    cout<<"records are"<<endl;
    for(auto p:mp){
        cout<<p.first<<" : "<<p.second<<"\n";
    }
    auto t=mp.find(2);
    if(t!=mp.end()){
        cout<<t->first<<" : "<<t->second;
    }
    else{
        cout<<"not found"<<endl;
    }
    mp.erase(3);
    cout<<"\nrecords after deletion are\n"<<endl;
    for(auto p:mp){
        cout<<p.first<<" : "<<p.second<<endl;
    }

}



