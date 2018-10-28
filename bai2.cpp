#include<iostream>
#include<math.h>
using namespace std;
float lai(float s,int &n,float &z,float &x);
char c;
int main()
{   float s;
    int n;
    float x;
    float z;
	cout<<"\tEnter initial amount:";
	cin>>x;
	cout<<"\tEnter number of years:";
	cin>>n;
	cout<<"\tEnter interest rate (percent per year):";
	cin>>z;
    cout<<"\At the end of "<<n<<" years, you will have  "<<lai(s,n,z,x)<<endl;
	return 0; 
   
}
    float lai(float s,int &n,float &z,float  &x)
{    s=x;
	for(int i=0;i<n;i++)
	{
		s=(s*(z/100))+s;
	}
    return s;
}
    

