#include <iostream>

using namespace std;

int main()
{
   float weight,height,bmi;
   cout<<"weight in kg and height in m";
   cin>>weight>>height;
   bmi = weight/(height*height);
   if(bmi<18.5)
    cout<<"underweight"<<endl;
   else if(bmi>25)
    cout<<"overweight"<<endl;
   else
    cout<<"normalweight"<<endl;
   cout<<"your bmi is="<<bmi;
    return 0;
}
