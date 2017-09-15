#include <iostream>

using namespace std;


int main() {
	
      float e,a,b,c,d,T;
	
      cout<<"Enter units of electricity used:\n";
	
      cin>>e;
	
      if(e<=50){
                
         a=0.5*e;
                
         T=a+a/5;
                
         cout<<"Total electricity bill="<<T;
	
        } else if(e>50&&e<=150){
                
         b=25+(0.75*(e-50));
               
         T=b+b/5;
	    
         cout<<"Total electricity bill="<<T;
	
        } else if(e>150&&e<=250){
	   
         c=100+(1.20*(e-150));
	    
         T=c+c/5;
	    
         cout<<"Total electricity bill="<<T;
	
        } else if(e>250){
	    
         d=220+(1.50*(e-250));
	    
         T=d+d/5;
	    
         cout<<"Total electricity bill="<<T;
	
        } else {
               
         cout<<"Invalid input";
	
        }
	
      return 0;

}
