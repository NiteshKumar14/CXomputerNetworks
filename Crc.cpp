#include <iostream>
#include <string>
using namespace std;
void crc(int *m,int *g,int msize,int gsize)
{   
    int count=0;
    int flag=0,k=0,i=count;
    bool choice=false;
    int gs=gsize;
    string result="";
    while(gs!=msize+gsize)
    {   
        
         cout<<"count ="<<count<<endl;
        cout<<"gs "<<gs<<endl;
            if(m[i]==0)
            {
                for(int j=count;j<gs;j++)
                {
                    m[j]=m[j]^0;
                    cout<<" zore xor "<<m[j]<<endl;
                    
                }
               result+="0";
                /*while(m[flag++]==0)
                {   
                    count++;
                    choice =true;
                }
               */ cout<<"flag"<<flag<<endl;
               
            }
             if(m[i]==1)
            {
                for(int j=count;j<gs;j++)
                {
                    m[j]=m[j]^g[k++];
                    cout<<"1 xor "<<m[j]<<endl;
                   
                }
                result+="1";
                k=0;

            }
            gs++;
            count++;
            i=count;
            




        
        
        
    }
    cout<<"result "<<result<<endl;

}
void display(int *c,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<c[i];
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    string msg="",gen="";
    int *mrr,*grr;
    cout<<"enter msg"<<endl;
    cin>>msg;
    cout<<"enter generator"<<endl;
    cin>>gen;
     int size=msg.size()+(gen.size())-1;
     cout<<"size"<<size<<endl;
    mrr=new int[size];
    grr=new int[gen.size()];
   
    for(int i=0;i<msg.size();i++)
    {
    
     mrr[i]=msg[i]-'0';

    }
    for(int i=msg.size();i<size;i++)
    {
        mrr[i]=0;
    }

    
    cout<<"DATA = ";
    display(mrr,size);
    

    for(int i=0;i<gen.size();i++)
    {
     grr[i]=gen[i]-'0';
    }
    crc(mrr,grr,msg.size(),gen.size());
    cout<<"remainder";
    display(mrr,msg.size()+(gen.size())-1);
    
    
    
    return 0;
}
