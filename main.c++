#include <iostream>
using namespace std;
double addition(double n1,  double n2){
    return n1 + n2;
}
double subtraction(double n1,  double n2){
    return n1 - n2;
}
double Division(double n1,  double n2){
    return n1 / n2;
}
double Multiplication(double n1,  double n2){
    return n1 * n2;
}
int main() {
    double n1, n2;
    int op, ad = 1, ab = 2, mul = 3, divi = 4;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"-------------claculator------------------------"<<endl;
    cout<<"--------- 1 - Adition (+) ---------------------"<<endl;
    cout<<"--------- 2 - subtraction  (-)  ---------------"<<endl;
    cout<<"--------- 3 - Division (/)  -------------------"<<endl;
    cout<<"--------- 4 - Multiplication (*)  -------------"<<endl;
    cout<<"--------- 4 - Result ( )  ---------------------"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"enter first number ";
    cin>>n1;
    cout<<"enter second number ";
    cin>>n2;
    cout<<"enter your number operation  ";
    cin>>op; 
    if(op == ad){
        cout<<"the result is "<<addition(n1, n2);
    }else if(op == ab){
        cout<<"the result is "<<subtraction(n1, n2);
    }else if(op == mul){
        cout<<"the result is "<<Division(n1, n2);
    }else if(op == divi){
        cout<<"the result is "<<Multiplication(n1, n2);
    }else{
        cout<<"------------------------------------------";
        cout<<"please enter number operation from 1 to 4 ";
        cout<<"------------------------------------------";
    }
}