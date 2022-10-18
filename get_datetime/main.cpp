#include <iostream>
#include <chrono>
#include <string>
using namespace std;

int main() {
  const auto currentDateTime          = chrono::system_clock::now();
  const auto currentDateTimeTimeT     = chrono::system_clock::to_time_t(currentDateTime);
  const auto currentDateTimeLocalTime = *gmtime(&currentDateTimeTimeT);
  char currentDateTimeArrStr[100];
  strftime(currentDateTimeArrStr, 100, "%Y-%m-%dT%H:%M:%S", &currentDateTimeLocalTime);
  cout << string(currentDateTimeArrStr) << endl;
  return 0;
}
