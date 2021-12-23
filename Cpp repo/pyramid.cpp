#include<iostream>
using namespace std;

int main(){

       int rows;

       cout << "Enter number of rows: ";
       cin >> rows;

       for (int i = 0; i <= rows; i++)
       {
              /* code */
              for (int j = 1; j <=i; j++)
              {
                     /* code */
                     cout << "* ";
              }
              
              return 0;
       }
       
}