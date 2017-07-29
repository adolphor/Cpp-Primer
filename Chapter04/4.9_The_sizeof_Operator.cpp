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

  /**
   * sizeof运算符的结果部分依赖于其作用的类型：
   * 1. char 结果 为1
   * 2. 引用类型 结果是被引用对象所占空间大小
   * 3. 指针 结果是指针本身所占空间大小
   * 4. 解引用指针 结果是指针指向的对象所占空间大小，指针不需要有效
   * 5. 数组 结果是数组中各元素所占空间大小之和
   * 6. string 或 vector 只返回该类型固定部分的大小，不计算对象中的元素占用了多少空间
   */

  return 0;
}
