#include <iostream>

using namespace std;

int main() {
    const float pi=3.14315926536;
    float r;
    float area;
    int h=15;

        // พื้นที่วงกลม

    cout << "Formula find circle :"<<endl;
    cout << "Please enter your radius" ;
    cin >> r;
    cout << "Area of Circle : " << pi*r*r<< endl;

        // เส้นรอบวงกลม
    cout << "Formula for circular circumference"<<endl;
    cout << "Area of Circle : " << 2*pi*r<< endl;


        //ทรงกระบอก สูง 15 หน่วย
    cout << "15 high cylinder formula"<<endl;
    cout << "Area of Circle : " << pi*(r*r)*h<< endl;






  return 0;
}
