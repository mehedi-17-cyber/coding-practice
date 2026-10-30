/* Both sum() and product() take arbitrary arguments */

#include<iostream>
using namespace std;

template<typename... Args>
int sum(Args... args) {
    return (args + ...);
}    
template<typename... Args>
int product(Args... args) {
    return (args * ...);
}    

int main()
{
    cout << sum(1,2,3,4,5) << endl;
    cout << product(1,2,3,4,5) << endl;
    
    return 0;
}