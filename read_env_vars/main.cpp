#include <iostream>
#include <string>
using namespace std;

int main() {
  char* val = getenv("HOME");
  string value = val == NULL ? std::string("") : std::string(val);
  cout << value << endl;
  return 0;
}
