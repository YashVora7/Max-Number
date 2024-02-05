/*

1. Input Values i.e. a,b & c
2. a, b & c are same print all values are equal
3. compare a & b
4. compare with c
5. print max values

*/

#include<iostream>

using namespace std;

int main(){

   int a,b,c;

   cout << "Enter the value of a,b & c:" << endl;
   cin >> a >> b >> c;

   if(a==b && b==c && c==a){
      cout << "All values are equal";
   }
   else{
      if( a > b){
         if( a > c){
            cout << "A is max";
         }
         else{
            cout << "C is max";
         }
      }
      else{
         if( b > c){
            cout << "B is max";
         }
         else{
            cout << "C is max";
         }
      }
   }

   return 0;

}