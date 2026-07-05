//count digit in a number..
// 1.take input a numbers list.
// 2. take exact number to count.
// 3.make a loop in which it move through wvery nmber and count exact number
// 4. write a comand to count digit in number .
#include<iostream>
using namespace std;
int main()
{
    int digit;
    int n[10]={2,2,2,2,2,2,2,3,3,3};
    int count=0;
   
    cout<<"Enter adigit to count"<<endl;
    cin>>digit;
    for(int i=1;i<=10;i++)
        {if(n[i]==digit)
        {
        count++;
        }
        }
    cout <<count<<endl;
}    
