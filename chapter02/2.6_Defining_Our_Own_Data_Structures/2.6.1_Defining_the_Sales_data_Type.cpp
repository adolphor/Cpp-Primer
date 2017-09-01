/**
 * 2.6.1 定义 Sales_data 类型
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/16
 */

#include <iostream>
#include "Sales_data.h"

int main() {

  // 具体查看 Sales_data.h 数据结构实现即可
  Sales_data data = Sales_data(); // 类初始化方法后面才学到的……
  data.bookNo = "testNo";
  std::cout << "bookNo = " << data.bookNo << std::endl;

  return 0;
}
