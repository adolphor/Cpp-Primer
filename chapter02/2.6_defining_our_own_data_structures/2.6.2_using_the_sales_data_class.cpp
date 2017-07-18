#include <iostream>
#include "Sales_data.h"

/**
 * 2.6.2 使用 Sales_data 类
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/17
 */
int main() {
  Sales_data data1, data2;
  double price = 0;
  // 0-201-78345-X 3 20.00
  std::cin >> data1.bookNo >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;
  // 0-201-78345-X 2 25.00
  std::cin >> data2.bookNo >> data2.units_sold >> price;
  data2.revenue = data2.units_sold * price;

  if (data1.bookNo == data2.bookNo) {
    unsigned totalCnt = data1.units_sold + data2.units_sold;
    double totalRevenue = data1.revenue + data2.revenue;
    // print: ISBN, total sold, total revenue, average price per book
    std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
    if (totalCnt != 0)
      std::cout << totalRevenue / totalCnt << std::endl;
    else
      std::cout << "(no sales)" << std::endl;
    return 0; // indicate success
  } else { // transactions weren't for the same ISBN
    std::cerr << "Data must refer to the same ISBN" << std::endl;
    return -1; // indicate failure
  }
}
