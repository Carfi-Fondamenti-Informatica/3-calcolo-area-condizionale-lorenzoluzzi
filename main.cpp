#include <iostream>
using namespace std;

int main() {
   
  int opzione;
   float lato_a,lato_b,result; 
  cin>>lato_a>>lato_b>>opzione; 
   
   switch (opzione){ 
      case 0:   
      result= (lato_a*lato_b)/2;   
      break;   
      case1;   
      result=lato_a*lato_a;   
         
      break;   
      case 3:
      result= lato_a*lato_b;   
      break;   
      default: 
      cout<< "opzione non valida";   
      break;   
        
       };    
   cout<< result; 
   return 0; 
}
