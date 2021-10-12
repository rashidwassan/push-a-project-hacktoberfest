#include<iostream>
using namespace std;
int main()
{
    int num,first=0,second=1,next;
    cout<<"Enter n number of terms :";
    cin>>num;
    cout<<"Fabiconi series is :";
    for(int i=0;i<num;i++)
    {

        cout<<first<<",";
        next=first+second;
        first=second;
        second=next;
    }

}

