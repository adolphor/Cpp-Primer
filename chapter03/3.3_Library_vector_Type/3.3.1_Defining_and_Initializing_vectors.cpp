/**
 * 3.3.1 定义和初始化vector对象
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/20
 */

#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
  /**
   * TODO 下面的范例代码为什么会报错？
   * 标准库类型vector表示对象的集合，其中所有对象的类型都相同。集合中的每个对象都有个与之对应的索引，索引用于访问对象。
   * C++语言有类模板，也有函数模板。模板本身不是类或者函数，但可以将模板看做为编译器生成类或函数编写的一份说明。
   * 编译器根据模板生成类或函数的过程，成为实例化（instantiation）。
   */
  vector<string> svec; // 初始化空值
  vector<string> svec2(svec); // 拷贝
  vector<string> svec3 = svec2; // 同上，拷贝

  vector<string> svec4(10, "hello"); // 10个 hello
  vector<string> svec5{"hello", "world", "!"};
  vector<string> svec6 = {"hello", "world", "!"}; // 同上

  vector<int> ivec(10); // 值初始化：10个0
  vector<string> svec(10); // 10 个空字符串

  vector<int> v1(10); // v1 有10个元素，每个元素都是0
  vector<int> v2{10}; // v2 有1个元素，该元素值为10
  vector<int> v3(10, 1); // v3 有10个元素，每个元素都是0
  vector<int> v4{10, 1}; // v4 有两个元素，值分别是10和1

  return 0;
}
