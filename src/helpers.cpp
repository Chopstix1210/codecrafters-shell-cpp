//
// Created by kjseg on 11/27/2025.
//

#include "helpers.h"
#include <cctype>
#include <string>

using namespace std;

string strip(const string &s) {
  size_t start = 0;
  ;
  while (start < s.size() && isspace(static_cast<unsigned char>(s[start])))
    ++start;

  size_t end = s.size();
  while (end > start && isspace(static_cast<unsigned char>(s[end - 1])))
    --end;

  return s.substr(start, end - start);
}
