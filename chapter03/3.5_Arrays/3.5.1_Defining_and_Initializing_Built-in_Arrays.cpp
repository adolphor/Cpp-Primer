/**
 * 3.5.1 定义和初始化内置数据
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/24
 */

#include <string>

using std::string;

int main() {
  // 数组初始化的时候长度就固定了，不能改变
  unsigned cnt = 42; // 非常量
  constexpr unsigned sz = 42; // 常量
  int arr[10]; // 含有10个整数的数组
  int *parr[sz]; // 含有42个整型指针的数组
  // string bad[cnt]; // 错误：cnt不是常量表达式
  // string strs[getSize()]; // 当 getSize() 是 constexpr 时正确，否则错误

  // 显示初始化数组元素
  const unsigned sz = 3;
  int ial[sz] = {0, 1, 2}; // 含有三个元素的数组，元素值是0，1，2
  int a2[] = {0, 1, 2}; // 维度是3的数组
  int a3[5] = {0, 1, 2}; // 等价于 a3[5] = {0,1,2,0,0}
  string a4[3] = {"hi", "bye"}; // 等价于 a4[3] = {"hi","bye",""}
  // int a5[2]={0,1,2}; // 错误，初始值过多

  // 字符数组的特殊性：新的初始化方式 & 字符串字面值后面有个空字符不能丢
  char a6[] = {'C','+','+'}; // 列表初始化，没有空字符
  char a7[] = {'C','+','+','\0'}; // 列表初始化，含有显示的空字符
  char a8[] = "C++"; // 自动添加表示字符串结束的空字符
  // const char a9[6] = "Daniel"; // 错误，没有空间可存放空字符！

  // 不允许拷贝和赋值
  int a10[] = {0,1,2};
  // int a11 = a10; // 错误：不允许使用一个数组初始化另一个数组
  // a11 = a10;     // 错误：不能把一个数组直接赋值给另一个数组

  // 理解复杂的数组声明
  // TODO 未完待续

}

