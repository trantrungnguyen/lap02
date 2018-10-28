#include<iostream>
using namespace std;


void tinh(char operatorr,char s ,float &a,float &b, float &x, float &y);
void nhap(char s,char operatorr,float &a,float &b,float &x,float &y);
 
 int main()
 {   
 	float operatorr;
	float a,b,x,y;
 	
 	char s;
 	 nhap(s,operatorr,a,b,x,y);
	 //cout<<tinh(operatorr,a,b,x,y);
 	return 0;
 }
 void nhap(char s,char operatorr,float a,float b,float x,float y)
 {
 	  
	  cout<<"\tnhap vao tu so, mau so: "<<endl;
	  cin>>a>>s>>b>>operatorr>>x>>s>>y;
 }
	  
	  
	  
 
void tinh(char operatorr,char s,float &a,float &b, float &x, float &y)
 {   
	 do
	 {
	 nhap(s,operatorr,a,b,x,y);
 	switch(operatorr)
      {
 	  case  '/' :
 		
 		cout<<"Answer="<<(a/b)+(x/y)<<endl;
		 break;
 	   case  '*' :
 	
 		cout<<"Answer="<<(a/b)*(x/y)<<endl;
		 break;
   	  case  '-':
 		
 		cout<<"Answer="<<(a/b)-(x/y)<<endl;
		 break;
 	  case '+':
 		
 		cout<<"Answer="<<(a/b)+(x/y)<<endl;
		 break;
 	default:
 		cout<<"Please enter again !";
      }
     cout<<"Do another (y/n)";
     cin>>c;
     if(c=='n')
     break;
     }
  while(1);
 
	
}
 
