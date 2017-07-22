/**
 * 3.3.2 向vector对象中添加对象
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/22
 */

#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;

using std::cin;

int main() {
  vector<int> v2;
  for (int i = 0; i < 100; ++i) {
    v2.push_back(i);
  }

  string word;
  vector<string> text;
  while (cin >> word) {
    text.push_back(word);
  }

  return 0;
}
