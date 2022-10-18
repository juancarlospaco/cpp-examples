#include <filesystem>
using namespace std;

int main() {
  filesystem::create_symlink("main.cpp", "linky");
  return 0;
}
