/* Makes temporary folders in current folder numbered from 0 to 9. */
#include <string>
#include <iostream>
#include <filesystem>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    string folder = "temp";
    folder += to_string(i);
    filesystem::create_directories(folder);
    cout << "FOLDER\t" << folder << endl;
  }
  return 0;
}
