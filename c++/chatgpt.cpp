#include <iostream>
using namespace std;

int main() {
  string msg;
  getline(cin, msg);

  for(int i = msg.size()-1; i >= 0; i--){
    if(isupper(msg.at(i))){
      msg.at(i)+=32;
    }
    else if(islower(msg.at(i))){
      msg.at(i)-=32;
    }
  }
  cout<<msg;
}