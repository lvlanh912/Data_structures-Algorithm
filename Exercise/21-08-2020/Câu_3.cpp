#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c,tbc;
    cout<<"nhap a,b,c :"<<endl;
    cin>>a>>b>>c;
    tbc=(a+b+c)/3;
    cout<<"trung binh cong cua 3 so vua nhap la : "<<setprecision(5)<<tbc<<endl;
}
