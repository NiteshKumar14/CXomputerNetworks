#include <iostream>
#include <cmath>
using namespace std;
int parity(int mbit)
{ int r;    
    for(int i=0;;i++)
    {   
        if(pow(2,i)>=i+mbit+1)
        {r=i;
        break;}

    }
    return r;

}
void set_parity(int rbit,int *arr,int size)
{
    int index=0;
    for(int i=0;i<rbit;i++)
    {
        index=pow(2,i);
        for(int j=0;j<size;j+index)
        {
            

        }

    }
    
}
int main()
{
    cout<<"enter the number of bits for the message"<<endl;
    int m;
    cin>>m;
    int r=parity(m);
    int *arr=new int[m+r];
    int size=m+r;
    set_parity(r,arr,size);

    
    
    








    return 0;
}