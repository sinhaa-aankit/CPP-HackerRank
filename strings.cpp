#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  int len1=a.size();
  int len2=b.size();
  cout<<len1<<" "<<len2<<endl;
  string c=a+b;
  cout<<c<<endl;
  swap(a[0],b[0]);
  cout<<a<<" "<<b;
    return 0;
}
