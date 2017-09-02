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
  /**
   * 1. 由于14.1节将要解释的原因，执行加法和IO的操作不作为Sales_data的成员，相反的，我们将其定义为普通函数 TODO
   * 2. 执行复合赋值运算的函数是成员函数
   * 3. Sales_data类无需专门定义赋值运算，其原因将在7.1.5节介绍 TODO
   */

  // 使用改进的Sales_data类（改写1.6的范例）
  Sales_data total; // 保存当前求和结果的变量
  if (read(cin, total)) { // 读入第一笔交易
    Sales_data trans; // 保存下一条交易数据的变量
    while (read(cin, trans)) { // 读入剩余的交易
      if (total.isbn() == trans.isbn()) // 检查isbn
        total.combine(trans); // 更新变量total当前的值
      else {
        print(cout, total) << endl; // 输出结果
        total = trans; // 处理下一本数
      }
    }
    print(cout, total) << endl; // 输出最后一笔交易
  } else { // 没有输入任何信息
    cerr << "No data?!" << endl; // 通知用户
  }
  return 0;
}
