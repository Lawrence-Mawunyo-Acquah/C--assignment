#include<iostream>
using namespace std;
int marks;
int main()
{
cout<<"Enter exam score"<<endl;
cin>>marks;
{ 
if(marks>=0 && marks<=49)
cout<<"Grade is: F"<<endl;
else if(marks>=50 && marks<=54)
cout<<"Grade is: D"<<endl;
else if(marks>=55 && marks<=59)
cout<<"Grade is: D+"<<endl;
else if(marks>=60 && marks<=64)
cout<<"Grade is: C"<<endl;
else if(marks>=65 && marks<=69)
cout<<"Grade is: C+"<<endl;
else if(marks>=70 && marks<=74)
cout<<"Grade is: B"<<endl;
else if(marks>=75 && marks<=79)
cout<<"Grade is: B+"<<endl;
else if(marks>=80 && marks<=100)
cout<<"Grade is: A"<<endl;
else
cout<<"No grading system availabe"<<endl;
}
return 0;
}
