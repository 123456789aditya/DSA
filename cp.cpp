// if(flag==0){
//                 cout<<"prime is:"<<arr[i]<<endl;
//             }
//             else{
//                 cout<<"non prime is:"<<arr[i]<<endl;
//             }#include<iostream>
// using namespace std;
// int main(){
//     cout<<"even and odd check"<<endl;
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int s=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<s;i++){
//         if(arr[i]%2==0){
//             cout<<"even number is:"<<arr[i]<<endl;
//         }
//         else{
//             cout<<"odd are"<<arr[i]<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// void funco(int p,int q){
//     cout<<"sum will be:"<<p+q;
// }
// int main(){
//     int a,b;
//     cout<<"enter two numbers"<<endl;
//     cin>>a;
//     cin>>b;
//     funco(a,b);

// }

// #include<iostream>
// using namespace std;
// void funco(string a,string  b){
//     if(a==b){
//         cout<<"password matched"<<endl;
//     }
//     else{
//         cout<<"wrong passwrd:Try again"<<endl;
//     }
// }
// int main(){
//     string a,b;
//     cout<<"enter password"<<endl;
//     cin>>a;
//     cout<<"enter ur password again"<<endl;
//     cin>>b;
//     funco(a,b);

// }

// #include<iostream>
// using namespace std;
// class Top{
//     static int a;
//     static int b;
//     public:static void sum(int ,int b){
//         cout<<a+b;

//     }
// };
// int Top::a;
// int Top::b;
// int main(){ 
//     Top::sum(4,5);
// }

// #include<iostream>
// using namespace std;
// class Top{
//     static int p;
//     static int q;
//     public:static void mulp(int p,int q){
//         cout<<p*q;
//     }
// };

// int Top::p;
// int Top::q;
// int main(){
    
//     Top::mulp(4,3);
// }

// #include<iostream>
// using namespace std;
// class Virus{
//     public:void affect(){
//         cout<<"your system is hacked"<<endl;
//     }
// };

// class Reward{
    
//     public:void func(){
//         Virus v1;
//         v1.affect();
//         cout<<"you won prize"<<endl;
//     }
// };

// int main(){
//     Reward r1;
    
// }

// #include<iostream>
// using namespace std;
// class Cybrom{
//     public:void func(){
//         cout<<"NEVER SHARE YOUR PASSWORD WITH ANYONE"<<endl;

//     }
// };

// class Cybrom2{
//     public:void func2(int a){
//         int fact=1;
//         for(int i=a;i>=1;i--){
//             fact=fact*i;
//         }
//         cout<<"factorial will be:"<<fact<<endl;
//         Cybrom c1;
//         c1.func();

//     }
// };
// int main(){
//     Cybrom2 c2;
//     c2.func2(6);
// }

// #include<iostream>
// using namespace std;
// class Top{
   
//     public:void show(){
//         cout<<"hi"<<endl;
//     }
//      public:Top(){
//         cout<<"gets automatically excequeted"<<endl;

//     }

//      public:Top(){
//         cout<<"again"<<endl;

//     }
// };
// int main(){
//     Top obj;
//     obj.show();
// }

// #include<iostream>
// using namespace std;
// class ATM{

//     public:ATM(){
//         cout<<"hi";
//     }
//     public:ATM(int a,int b){
        
//         if(a==1111 && b==2024){
//             cout<<"welcome to Lahore"<<endl;
//         }
//         else{
//             cout<<"welcome to karachi"<<endl;
//         }
//     }
// };
// int main(){
//     int acno;
//     int pwd;
//     cout<<"enter acount number"<<endl;
//     cin>>acno;
//     cout<<"enter the password"<<endl;
//     cin>>pwd;
//     ATM obj(acno,pwd);
// }



// #include<iostream>
// using namespace std;
// class dp{
//     public:dp(){
//         cout<<"memory allocation"<<endl;
//     }
//     ~dp(){
//         cout<<"released"<<endl;
        
//     }
//     public:void show(){
//         cout<<"welcome";
//     }
// };
// int main(){
//     dp d1;
//     d1.show();

// }



// #include<iostream>
// using namespace std;
// class Student2;
// class Student1{
//     int marks=90;
//     friend void cmp(Student1,Student2);

// };
// class Student2{
//     int marks=100;
//     friend void cmp(Student1,Student2);
// };

// void cmp(Student1 s1,Student2 s2){
//     if(s1.marks>s2.marks){
//         cout<<"student 1 is highest"<<endl;
//     }
//     else{
//         cout<<"student 2 is highest"<<endl;
//     }
// }
// int main(){
//     Student1 s1;
//     Student2 s2;
//     cmp(s1,s2);
// }


// #include<iostream>
// using namespace std;
// class Tnp;
// class Cybrom{
//     void funco1(int a){
//         cout<<"Fees will be:"<<a<<endl;
//     }
//     friend void cmp(Cybrom,Tnp);
// };

// class Tnp{
//     void funco2(int b){
//         cout<<"after placement fees will be:"<<b<<endl;
//     }
//     friend void cmp(Cybrom,Tnp);
// };

// void cmp(Cybrom c1,Tnp t1){
//     c1.funco1(100);
//     t1.funco2(33);
    
// }
// int main(){
//     Cybrom a1;
//     Tnp a2;
//     cmp(a1,a2);

// }

// #include<iostream>
// using namespace std;
// class Ankush;
// class Ankit{
//     int money=20;
//     friend void rohit(Ankit,Ankush);
// };

// class Ankush{
//     int money=10;
//     friend void rohit(Ankit,Ankush);
// };

// void rohit(Ankit a1,Ankush a2){
//     cout<<"SUM WILL BE"<<a1.money+a2.money;
// }

// int main(){
//     Ankit a1;
//     Ankush a2;
//     rohit(a1,a2);
// }



// #include<iostream>
// using namespace std;
// class Rahul{
//     void Cybrom(){
//         cout<<"private function"<<endl;
//     }
//     friend void Rohit(Rahul r1){
//         r1.Cybrom();

//     }   
// };

// void Rohit(Rahul r1);
// int main(){
//     Rahul r1;
//     Rohit(r1);
// }




// #include<iostream>
// using namespace std;
// class Axis{
//     int amount=10000;
//     friend class rbi;
// };
// class Hdfc{
//     int amount=20000;
//     friend class rbi;
// };
// class rbi{
//     public:void funco1(Axis a1,Hdfc h1){
//         cout<<"total balance will be:"<<a1.amount+h1.amount;
//     }
// };
// int main(){
//     Axis a1;
//     Hdfc h1;
//     rbi r1;
//     r1.funco1(a1,h1);
// }



// #include<iostream>
// using namespace std;
// class Cybrom1{
//     void first(){
//         cout<<"you unlcoked a private class"<<endl;
//     }
//     friend class Sony;
    
// };
// class Cybrom2{
//     void second(){
//         cout<<"you unlcoked a private class-2"<<endl;
//     }
//     friend class Sony;
    
// };

// class Sony{
//     public:void final(Cybrom1 c1,Cybrom2 c2){
//         c1.first();
//         c2.second();
//     }

// };



// int main(){
//     Cybrom1 c1;
//     Cybrom2 c2;
//     Sony s1;
//     s1.final(c1,c2);

// }

// #include<iostream>
// using namespace std;
// class RBI{
//     int i;
//     public:void show(){
//         cout<<"RBI class"<<endl;

//     }
// };

// class SBI:public RBI{
//     int a;
//     public:void show();
// };

// int main(){
//     SBI s1;
//     s1.show();
// }

// #include<iostream>
// using namespace std;
// class SBI{
//     public:void sbiint(){
//         cout<<"\nSBI\n";
//     }

// };

// class RBI{
//     public:void rbiint(){
//         cout<<"\nRBI\n";
//     }
// };

// class CUSTOMER: public SBI ,public RBI{
//     public:void msg(){
//         cout<<"\nCUSTOMER\n";
//     }
// };

// int main(){
//     CUSTOMER c1;
//     c1.sbiint();
//     c1.rbiint();
//     c1.msg();
// }
// #include<iostream>
// using namespace std;
// class RBI{
//     public:void loan(){
//         cout<<"\nRBI\n";
//     }
// };
// class AXIS:public RBI{
//     public:void loan(){
//         cout<<"\nAXIS\n";
//     }
// };

// int main(){
//     AXIS a1;
//     a1.loan();
// }

// #include<iostream>
// using namespace std;
// class RBI{
//     public:virtual void loan(){
//         cout<<"\nRBI class\n";
//     }
// };
// class AXIS:public RBI{
//     public:void loan(){
//         cout<<"\nAXIS";
//     }
// };
// class SBI:public RBI{
//     public:void show(){
//         cout<<"\nRBI\n";
//     }
// };
// int main(){
//     RBI *r;

//     AXIS a;
//     SBI s;
    
//     r=&s;
//     r->loan();
    

// }

// #include<iostream>
// using namespace std;
// class A{
//     public:void cybrom(){
//         cout<<"number s good";
//     }
// };

// class B:virtual public A{

// };

// class C:virtual public A{

// };
// class D:public B,public C{

// };
// int main(){
//     A obj;
//     B obj1;
//     C obj2;
//     D obj3;
//     obj3.cybrom();
// }

#include<iostream>
using namespace std;
class Animal{
    public:virtual void sound()=0;
};
class Cat:public Animal{
    public:void sound(){
        cout<<"Meowwwww";
    }

};

class Dog:public Animal{
    public:void sound(){
        cout<<"Bark";
    } 
};

class Lion:public Animal{
    public: void sound(){
        cout<<"Roar";
    }
};

int main(){
    Animal *a1;
    Cat c1;
    Lion li;
    Dog d1;
    a1=&li;
    a1->sound();

}