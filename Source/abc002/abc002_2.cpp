#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
   string str;
   cin >> str;
   for (int i = 0;i < str.size();i++){
       if (str.at(i) == 'a' ||str.at(i) == 'i' ||str.at(i) == 'u' ||str.at(i) == 'e' ||str.at(i) == 'o') {           
       str.erase(i,1);
       i = i -1;
       }
   }
   cout << str << "\n";
}
  
