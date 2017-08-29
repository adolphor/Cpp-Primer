/**
 * 2.2.4 名字的作用域
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/29
 */

#include <iostream>

int reused = 42; // resued拥有全局作用域

int main() {

  // 作用域：和Java规则一样的啦~
  int sum = 0; // 拥有块作用域
  for (int val = 0; val <= 10; ++val) {
    sum += val;
  }

  // 嵌套的作用域
  std::cout << reused << " " << sum << std::endl;
  int reused = 0; // 新建局部变量reused，覆盖了全局变量 reused
  std::cout << reused << " " << sum << std::endl;  // 生效的是局部变量
  std::cout << ::reused << " " << sum << std::endl; // 显示访问全局变量

  return 0;

}