#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;

int main() {
  for (const filesystem::directory_entry& entry: filesystem::directory_iterator(".")) {
    const auto& path = entry.path();
    cout << path.string() << endl;
  }
  return 0;
}
