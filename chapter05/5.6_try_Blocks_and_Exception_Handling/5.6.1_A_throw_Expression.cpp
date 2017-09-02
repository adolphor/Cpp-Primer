/**
 * 5.6.1 throw表达式
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/1
 */

#include <stdexcept>
#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {

  Sales_item item1, item2;
  cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn()) {
    if (item1.isbn() != item2.isbn())
      throw runtime_error("Data must refer to same ISBN"); // throw 关键字
    cout << item1 + item2 << endl;
    return 0; // indicate success
  } else {
    cerr << "Data must refer to same ISBN" << endl;
    return -1; // indicate failure
  }

}
