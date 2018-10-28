#include<iostream>
using namespace std;
void Input(char &operatorr,float &a,float &b);
void operato_r(char operatorr,float a,float b);
char c;
 
 
int main()
{     float a,b;
	  char operatorr;	
      operato_r(operatorr, a, b)  ;
	  return 0;
}
  
  void Input(char &operatorr,float &a,float &b)
  {
   cout<<"\tEnter first number ,Enter second  number,Enter operator :";
   cin>>a>>operatorr>>b;
  }
  
  void operato_r(char operatorr,float a,float b)
  {
  
  
    do
      {
        Input(operatorr,a,b);
        switch(operatorr)
         {
 	       case  '/' :
 		
 		      cout<<"\tAnswer="<<a/b<<endl;
		      break;
 	       case  '*' :
 	
 		      cout<<"\tAnswer="<<a*b<<endl;
		      break;
 	       case  '-':
 		
 	      	cout<<"\tAnswer="<<a-b<<endl;
		    break;
         	case '+':
 		    cout<<"\tAnswer="<<a+b<<endl;
		    break;
         	default:
 	    	cout<<"\tPlease enter again !"<<endl;
 		
         }
        cout<<"\tDo another (y/n)";
        cin>>c;
        if(c=='n')
        break;
	

      }
     while(1);
 
	
 
 }
