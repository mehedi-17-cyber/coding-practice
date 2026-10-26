#include<iostream>
using namespace std;

void swap1(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap2(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap3(int& a, int&b) {
    a = a*b;
    b = a/b;
    a = a/b;
}            

int main()
{
    int a,b,choice;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Choose any function : " << endl;
    cout << "1. swap1()" << endl;
    cout << "2. swap2()" << endl;
    cout << "3. swap3()" << endl;
    cin >> choice;
    
    if(choice == 1) swap1(a,b);
    else if(choice == 2) swap2(a,b);
    else if(choice == 3) swap3(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}