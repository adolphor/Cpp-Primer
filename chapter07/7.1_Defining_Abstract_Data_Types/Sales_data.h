/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/16
 */
// ifdef  只有当已定义的时候才进行后续操作
// ifndef 只有当未定义的时候才进行后续操作
#ifndef CPP_PRIMER_SALES_DATA_H
// define 进行定义
#define CPP_PRIMER_SALES_DATA_H

#include <string>

/**
 * 类的定义：struct 跟上类名 和 方法体{}，然后以引号 ";" 结束。
 * 方法体后面可以跟上变量名，表示类的定义和此类的变量的定义一起进行，但不建议这么做。
 */

double avg_price() const;

struct Sales_data {
    // 新成员，关于Sales_data对象的操作
    std::string isbn() const { return bookNo; } // 定义在类内部的成员函数：隐式的inline函数。"return bookNo;"等价于"return this->bookNo;"

    Sales_data &combine(const Sales_data &);

    // 原有成员（参考2.6.1节）
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// Sales_data非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);

std::ostream &print(std::ostream &, const Sales_data &);

std::istream &read(std::istream &, Sales_data &);

// endif 操作到此结束
#endif //CPP_PRIMER_SALES_DATA_H
