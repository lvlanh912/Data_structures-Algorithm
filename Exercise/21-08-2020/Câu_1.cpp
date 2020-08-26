#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c,dt;
    cout<<"nhap a,b va c trong phuong trinh bac 2 : "<<endl;
    cin>>a>>b>>c;
    dt=b*b-4*a*c;
    if(a==0)
      if(b!=0)
      cout<<"nghiem pt la : "<<setprecision(5)<<-c/b;
      else 
       if (c==0)
    cout<<"pt vo so nghiem"<<endl;
       else
    cout<<"pt vo nghiem"<<endl;
    
    else{
       if (dt==0)
         cout<<"nghiem pt la :"<<setprecision(5)<<-b/2*a;
       else if (dt<0)
       cout<<"pt vo nghiem"<<endl;
       else 
        {
           cout<<"pt co nghiem la :" <<endl;
            cout<<"x1 = "<<setprecision(5)<<(b+sqrt(dt))/2*a<<endl;
            cout<<"x2 = "<<setprecision(5)<<(-b+sqrt(dt))/2*a<<endl;
     }}
 }
