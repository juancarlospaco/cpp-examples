#include <fstream>
using namespace std;

int main() {
  ofstream f;
  f.open("example.txt");
  f << "Hello" << endl;
  f.close();
  return 0;
}
