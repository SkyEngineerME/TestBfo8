#include<iostream>
#include<cmath>
using namespace std;



int findMinLoc(double a,double b,double c,double d){
  double y[201];
  int e,x =0;
  while(x < 201){
    y[x]= a*sin((M_PI*x)/(b*b+1))+c*cos((M_PI*x)/(d*d+1));
   
    if(x-1 >= 0){
    if(y[x] < y[x-1] ){
      e=x;
      cout << e <<endl;
    }
    else{

    }
    }
     x += 1;
  }
  return e;
}
int main(){

    cout << findMinLoc(5,3,9,10)<<"\n";
    cout << findMinLoc(1,1,1,1);

    return 0;
}