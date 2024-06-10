#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(8);

    vector<int> v = {1 , 2 , 3 , 4 , 5 , 6 , 7};

   for(int i : v){
    cout << i << " ";
   };
   cout <<  endl ;
  rotate(v.begin() ,v.begin()+2 , v.end());
   cout << " ofter  roteting " << endl ;
   for(int i : v){
      cout << i << " ";
   }
   cout << endl; 

   sort(v.begin() , v.end());
   cout << "ofter sorting " << endl;
   for(int i : v){
    cout << i << " " ;
   }
     
  cout <<  endl; 

   int a = 5 ;
   int b =  3;
  
   cout << max(a , b ) << " <- max number " << endl ; 
   cout << min(a , b) << " <- min number " << endl ; 
    
  int  c   = 12 ;
  int  d = 11 ; 
  swap(c  , d );
  cout << "value is c -> " << c << endl<< "value is d -> " << d << endl ;


return 0 ;
}