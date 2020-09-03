#include<iostream>
using std::cin;
using std::cout;


int pow(int base, int expo){
    int results = 1;
    for (int i = 1;i<=expo;i++){

    results = results*base;
    }
  return results;
    }



void pow_pow(int base, int expo){

    int x;
    x = pow(base,expo);
    cout<<"print the power is "<<x<<std::endl;
}



int main(){
int base,expo;
    
    cout<<"input the base?";
    cin>>base;
    cout<<"input the expon?";
    cin>>expo;
    pow_pow(base,expo);
}
