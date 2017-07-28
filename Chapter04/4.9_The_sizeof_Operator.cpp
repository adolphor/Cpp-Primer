/**
 * 4.9 sizeof运算符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/28
 */

#include "Sales_data.h"

int main(){
  /**
   * sizeof运算符返回一条表达式或者一个类型名字所占的字节数。其所得值是一个size_t类型。
   * 运算符的运算的运算对象有两种形式：
   * sizeof(type)
   * sizeof expr
   */
  Sales_data data, *p;
  sizeof(Sales_data);//存储 Sales_data 类型的对象所占空间大小
  sizeof data; // data的类型大小, 即 sizeof(Sales_data)
  sizeof p; // 指针所占的空间的大小
  sizeof *p; // p 所指类型的空间大小, 即 sizeof(Sales_data)
  sizeof data.revenue; // Sales_data 的 revenue 成员对应类型的大小
  sizeof Sales_data::revenue; // 另一种获取 revenue 大小的方式
  return 0;
}
