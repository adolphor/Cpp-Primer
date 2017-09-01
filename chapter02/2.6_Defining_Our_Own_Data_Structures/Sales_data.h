/**
 * 自定义的 Sales_data 类
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/17
 */

// ifndef 是头文件保护符，只有此类未定义的时候才会执行后续操作，防止重复引入头文件导致的重复定义
#ifndef CPP_PRIMER_SALES_DATA_H // 只有当未定义的时候才进行后续操作；此外还有 ifndef 关键字表示只有当已定义的时候才进行后续操作
#define CPP_PRIMER_SALES_DATA_H // define 进行定义

#include <string>

/**
 * 类的定义：struct 跟上类名 和 方法体{}，然后以引号 ";" 结束。
 * 方法体后面可以跟上变量名，表示类的定义和此类的变量的定义一起进行，但不建议这么做。
 */
struct Sales_data {
    std::string bookNo;
    unsigned units_sold; // 注意：unsigned 后面没有跟数据类型，就会使用默认的int类型，也就是等价于 unsigned int units_sold;
    double revenue;
}; // 一定不要忘记定义结束地方的分号！！！！
// endif 操作到此结束
#endif //CPP_PRIMER_SALES_DATA_H
