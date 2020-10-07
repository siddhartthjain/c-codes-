#include<iostream>
//find if the the is curious or not
// for eg  1! + 4! + 5! = 1 + 24 + 120 = 145.
using namespace std;
int get_fact(int n)
{
    int c=1;
    if(n==1||0)
    {
        return 1;
    }
    for(int i=2;i<=n;i++)
    {
        c=c*i;
    }
    return c;

}



int main()
{
    int no;
    int i;
    int sum=0;
    int num;
    int fact;
for( i=1;i<=10000;i++)
    {
        no=i;

        while(no!=0)
        {
            num=no%10;
            no=no/10;
            fact=get_fact(num);
           // cout<<"it is fact"<<fact;
            sum=sum+fact;

        }
        if(sum==i)
            cout<<"this is curious:"<<i<<endl;

         sum=0;
    }

}
