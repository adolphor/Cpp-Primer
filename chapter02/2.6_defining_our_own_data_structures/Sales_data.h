/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/17
 */
#ifndef CPP_PRIMER_SALES_DATA_H
#define CPP_PRIMER_SALES_DATA_H

#include <string>

/**
 * 类的定义：struct 跟上类名 和 方法体{}，然后以引号 ";" 结束。
 * 方法体后面可以跟上变量名，表示类的定义和此类的变量的定义一起进行，但不建议这么做。
 */
struct Sales_data {
    std::string bookNo;
    unsigned units_sold; // TODO 无符号类型？具体是什么类型？
    double revenue;
};

#endif //CPP_PRIMER_SALES_DATA_H
