#include <iostream>
#include <string>
using namespace std;
int xorr(string m,string g)
{   int r;
	const char *msg = m.c_str();
 	int im=atoi(msg);
	 const char *gen = g.c_str();
 	int ig=atoi(gen);
	 if(im==0 &&ig==1||im==1&&ig==0)
	 r=1;
	 else 
	 r=0;
	 return r;



}
void Crc(string msg,string gen)
{   int count=0,x;
	int msg_length=msg.length();
	int gen_length=gen.length();
	const char *c1 = msg.c_str();
 	int im=atoi(c1);
	 const char *c2 = gen.c_str();
 	int ig=atoi(c2);
	 cout<<"ig "<<ig<<"im "<<im<<endl;
	for(int i=0;i<gen_length-1;i++)
	{
		msg+=to_string(0);
	}
	while(im>ig&&im!=0)
	{
		for(int i=count;i<gen_length;i++)
		{
			if(msg[count]==0)
			{
			 for(int p=count;p<gen_length;p++)
			 {
				 x=xorr(msg[p],gen[p])
				msg[p]=(char)x; 
			 }
			}
			else
			{
				for(int k=count;k<gen_length;p++)
				{
					x=xorr(msg[k],gen[k]);

					msg[p]=(char)x;
				}
			}


			

		}
		count++;
		gen_length++;
		c1=msg.c_str();
		im=atoi(c1);

	}

















}

























int main()
{
   string msg="",gen="";
   cout<<"enter the message "<<endl;
   cin>>msg;
   cout<<"enter the generator fuction"<<endl;
   cin>>gen;
   Crc(msg,gen);

 return 0;
}