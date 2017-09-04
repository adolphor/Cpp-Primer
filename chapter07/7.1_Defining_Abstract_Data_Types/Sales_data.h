/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/16
 */
#ifndef CPP_PRIMER_SALES_DATA_H
#define CPP_PRIMER_SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data {

    friend Sales_data add(const Sales_data &, const Sales_data &);// 非成员函数

    friend std::ostream &print(std::ostream &, const Sales_data &);// 非成员函数

    friend std::istream &read(std::istream &, Sales_data &);// 非成员函数

public:
    // 构造函数
    Sales_data() :
        units_sold(0), revenue(0.0) {} // TODO 为什么不关心 bookNo的值？

    Sales_data(const std::string &s) :
        bookNo(s), units_sold(0), revenue(0.0) {} // 使用s初始化bookNo，使用别的值初始化其他属性

    Sales_data(const std::string &s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(p * n) {}

    Sales_data(std::istream &); // 声明在类中，但定义在类外

    // 关于Sales_data对象的操作
    std::string isbn() const { return bookNo; } // isbn 常量成员函数，用于返回对象的ISBN编号；定义和声明都在这里实现；const修改隐式this的指针类型

    Sales_data &combine(const Sales_data &); // combine 成员函数，用于将一个Sales_data对象加到另一个对象上；只声明，无定义

    double avg_price() const; // 只声明，无定义

private:
    // 原有成员（参考2.6.1节）
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

// nonmember Sales_data interface functions
Sales_data add(const Sales_data &, const Sales_data &);  // add函数，指向两个Sales_data对象的加法

std::ostream &print(std::ostream &, const Sales_data &); // 将Sales_data对象的值输出到ostream

std::istream &read(std::istream &, Sales_data &); // 将数据从istream读入到Sales_data对象中

// used in future chapters
inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
  return lhs.isbn() < rhs.isbn();
}

#endif //CPP_PRIMER_SALES_DATA_H
