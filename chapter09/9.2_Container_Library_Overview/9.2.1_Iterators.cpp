/**
 * 9.2.1 迭代器
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/8
 */

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main() {
  /**
   * 迭代器范围：
   * 左闭合区间 [ begin, end )
   */

  /**ƒ
   * 使用左闭合范围蕴含的编程假设
   * 1. 如果begin与end相等，则范围为空
   * 2. 如果begin与end不等，则范围至少包含一个元素，且begin指向该范围中的第一个元素
   * 3. 我们可以对begin递增若干次，是的begin==end
   */

  vector<string> v = vector<string>();
  cout << "vector size is: " << v.size() << endl;
  v.push_back("Hello vector!");
  cout << "vector size is: " << v.size() << endl;

  // 可以安全的使用如下代码处理元素，而这是安全的
  auto itv = v.begin();
  while (itv != v.end()) {
    cout << *itv << endl;
    itv++;
  }

  return 0;
}
