/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/16
 */

#include <iostream>
#include "Sales_data.h"

using std::istream;
using std::ostream;

Sales_data::Sales_data(std::istream &is) { // Sales_data 类的 Sales_data 方法，因为方法名和类名相同，所以是构造函数
  // read will read a transaction from is into this object
  read(is, *this);
}

double Sales_data::avg_price() const {
  if (units_sold)
    return revenue / units_sold;
  else
    return 0;
}

// add the value of the given Sales_data into this object
Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold; // add the members of rhs into
  revenue += rhs.revenue;       // the members of ``this'' object
  return *this; // return the object on which the function was called
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;  // copy data members from lhs into sum
  sum.combine(rhs);      // add data members from rhs into sum
  return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream &read(istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

ostream &print(ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}
