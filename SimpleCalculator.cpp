#include<iostream>
using namespace std;

template <class T>
class SimpleCalculator{
    public:
      T sum(T a,T b){
          return a+b;
      }
      
      T sub(T a,T b){
          return a-b;
      }
      
      T mul(T a,T b){
          return a*b;
      }
      
      T div(T a,T b){
          return a/b;
      }
};
int main(){
    SimpleCalculator<double> simp_calc;
    double num1,num2;
    cout<<"Enter the two numbers:"<<endl;
    cout<<"1st Number: ";
    cin>>num1;
    cout<<"2nd Number: ";
    cin>>num2;
    int choice;
    cout<<"1.Addition"<<endl;
    cout<<"2.subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Divison"<<endl;
    cout<<"Select the operation(1,2,3,4):";
    cin>>choice;
    
    switch(choice){
        case 1:
            cout<<num1<<"+"<<num2<<"="<<simp_calc.sum(num1,num2)<<endl;
            break;
        case 2:
            cout<<num1<<"-"<<num2<<"="<<simp_calc.sub(num1,num2)<<endl;
            break;
        case 3:
            cout<<num1<<"*"<<num2<<"="<<simp_calc.mul(num1,num2)<<endl;
            break;
        case 4:
            if(num2==0){
                cerr<<"error: Division by zero"<<endl;
                break;
            }
            cout<<num1<<""<<num2<<"="<<simp_calc.div(num1,num2)<<endl;
            break;
        default:
            cout<<"Select the valid choice(1,2,3,4)!!"<<endl;
            break;
    }
    return 0;
}