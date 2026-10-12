#include <iostream>
using namespace std;
int main() {
    int income; 
    cout<<"enter income"<<endl;
    cin >> income; 
    if(income < 10000) 
    cout << "Tax: 0"<<endl;
    else if(income < 50000)
    cout << "Tax: " << income * 0.10<<endl;
    else 
    cout << "Tax: " << income * 0.20<<endl; 
    return 0;
}