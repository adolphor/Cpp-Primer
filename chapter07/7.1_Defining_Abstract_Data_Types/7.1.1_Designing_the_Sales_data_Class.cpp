/**
 * 7.1.1 设计 Sales_data 类
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/16
 */

#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {
  Sales_data total;
  if (read(cin, total)) {
    Sales_data trans;
    while (read(cin, trans)) {
      if (total.isbn() == trans.isbn())
        total.combine(trans);
      else {
        print(cout, total) << endl;
        total = trans;
      }
    }
    print(cout, total) << endl;
  } else {
    cerr << "No data?!" << endl;
  }
  return 0;
}
