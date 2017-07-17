#include <iostream>
/**
 * 3.1 命名空间的using声明
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/17
 */
using std::cin; // 命名空间::名称
using std::cout; using std::endl; // 可以一行中定义多个，但必须以引号分割（其实跟多行就一样了）

int main() {
  /**
   * 格式：using namespace::name
   */
  cout << "Enter two numbers: " << endl; // 直接使用cout 不再需要std前缀
  int v1, v2;
  cin >> v1 >> v2;
  cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

  /**
   * 注意：头文件中不要包含using声明。因为头文件中的内容会拷贝到所有引用它的文件中去，如果头文件中有某个suing声明，
   * 那么每个使用了该头文件的文件就都会有这个声明。那么可能产生始料未及的冲突。
   */

  return 0;
}

