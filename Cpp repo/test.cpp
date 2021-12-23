// C program to play song Jingle Bell
// using the BEEP() function

#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;

       while (num>0)
       {
              /* code */
              cout<<num <<endl;
              if (num %5==0)
              {
                     /* code */
                     cout<< "Beep" << endl;
              }
              
              num=num-1;

       }
       
	return 0;
}
	