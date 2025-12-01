#include "helpers.h"
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  string command;

  while (true) {
    cout << "$ ";
    getline(cin, command);

    string strip_command = strip(command);

    if (strip_command.compare("exit") == 0) {
      return 0;
    }

    cout << command << ": command not found\n";
  }
  return 0;
}
