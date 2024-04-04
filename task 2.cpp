#include<iostream>
using namespace std;
int main(){
    int a,b;
    char opr;
    cout<<"Enter two integers:";
    cin>>a>>b;
    cout<<endl;
    cout<<"enter operator:+(add),-(sub),"<<"*(multiple),/(divide):";
    cin>>opr;
    cout<<endl;
    cout<<a<<""<<opr<<""<<b<<"=";
    switch(opr){
      case'+':
      cout<<a+b<<endl;
      break;
      case'-':
       cout<<a-b<<endl;
       break;
       case'*':
        cout<<a*b<<endl;
        break;
        case'/':
        if(b!=0)
         cout<<a/b<<endl;
         else 
         cout<< "ERROR\nCannot divide by zero" << endl;
         break;
         default:
         cout << "illegal operation" << endl;
         }
          return 0;
}