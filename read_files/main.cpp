#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;

int main() {
  ifstream f;
  stringstream s;
  f.open("main.cpp");
  s << f.rdbuf();
  f.close();
  cout << s.str() << endl;
  return 0;
}
