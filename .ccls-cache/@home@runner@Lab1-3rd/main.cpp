#include <iostream>


using std::cout; 
using std::string;
using std::endl;

int main() {
  string name;
  int len;
  int siz;
  name = "Antonio Alfaro";
    len = name.length();
    siz = name.size();

  cout<<"Your name is : "<<name<<endl;
  cout<<"The size is : "<<siz<<endl;
  cout<<"The length is : "<<len<<endl;

  string news = name.substr(8,9);
  cout<<news<<endl;

  cout<<"Alfaro,A"<<endl;
  return 0;
}