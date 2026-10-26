#include<iostream>
#include<utility>
using namespace std;
pair<int,int> rectangle(int height, int width) {
    int area = height * width;
    int perimeter = 2*(height + width);
    return {area,perimeter};
}

int main()
{
    int height, width;
    cout << "Enter height : ";
    cin>> height;
    cout << "Enter width : ";
    cin>> width;
    auto res = rectangle(height,width);
    cout << "Area : " << res.first << endl;
    cout << "Perimeter : " << res.second << endl;
    
    return 0;
}