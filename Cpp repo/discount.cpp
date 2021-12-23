#include <iostream>
using namespace std;
int main()
{

       int i, n;
       float age[5], younger, elder;

       cout << "Enter the number of person's:";
       cin >> n;

       for (i = 0; i < n; i++)
       {
              cout << "Enter person\t" << i + 1 << "age:";
              cin >> age[i];
       }
       younger = age[0];
       elder = age[0];

       for (i = 0; i < n; i++)
       {
              if (age[i] < younger)
                     younger = age[i];

              else if (age[i] > elder)
                     elder = age[i];
       }

       cout << "The younger person age is:" << younger;

       int price = 10;
       int discount = younger;
       cout << "\nDiscount given : " << discount << "%";
       int total_price = price * n;
       float dis_price = (total_price * discount) / 100;
       float final_price = total_price - dis_price;
       cout << "\nFinal price to pay : " << final_price;

       cout<<"\n\n\nGaurav Kumar\t \n022  \n C++ lab";
}
