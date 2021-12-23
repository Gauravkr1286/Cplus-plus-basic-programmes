#include<iostream>
using namespace std;
float mult (float x, float y)
{
       return (x*y);
}
double div (double p, double q) 
{
       return (p/q);
}
int main()
{
       float a=12.345;
       float b=9.62;
       std::cout<<"multipliacation="<<mult(a,b)<<endl;
       std::cout<<"division="<<div(a,b)<<endl;

       return 0;
}