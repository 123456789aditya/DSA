// #include<iostream>
// using namespace std;
// #include<stack>
// bool valid(string s){
//     stack<char>st;
//     bool r=true;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='[' || s[i]=='{' || s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]==']'){
//             if(!st.empty() && st.top()=='[' ){
//                 st.pop();
//             }
//             else{
//                 r=false;
//                 break;
//             }
//         }
//         else if(s[i]=='}'){
//             if(!st.empty() && st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 r=false;
//                 break;
//             }
//         }
//         else if(s[i]==')'){
//             if(!st.empty() && st.top()=='('){
//                 st.top();
//             }
//             else{
//                 r=false;
//                 break;
//             }
//         }
//     }
//     if(!st.empty()){
//         return false;
//     }
//     else{
//         return r;
//     }
// }
// int main(){
//     string s="([{}])";
//     if(valid(s)){
//         cout<<"valid";
//     }
//     else{
//         cout<<"invalid";
//     }
// }


//FORWARD LIST(directed graph)(singly linked list)
//reverse function is inbuilt]
//no length function]
//unique() function removes the duplicate value of yhe f-list.
// we use only sort() function for arranging data in ascending order
//reverse() for reversing the f-list data

// #include<iostream>
// using namespace std;
// #include<forward_list>
// int main(){

//     forward_list<int>f;
//     f.push_front(3);
//     f.push_front(1);
//     f.push_front(76);
//     f.push_front(8);
//     f.push_front(1);
//     f.sort();
//     f.unique();
//     for(auto p:f){
//         cout<<p<<"\t";
//     }
//     f.pop_front();
//     cout<<"\nafter delete\n";
//     for(auto p:f){
//         cout<<p<<"\t";
//     }
//     cout<<"\n merge \n";
//     forward_list<int>f1{50,3,1,2,5};
//     forward_list<int>f2{4,30,70,20,12};
//     cout<<"\nf1 data\n";
//     for(auto p:f1){
//         cout<<p<<"\t";
//     }
//     cout<<"\n f2 data\n";
//     f1.sort();
//     f2.sort();
//     for(auto p:f2){
//         cout<<p<<"\t";
//     }
//     f1.merge(f2);
//     cout<<"\nafter merging data of f1\n";
//     for(auto p:f1){
        
//     }
// }




