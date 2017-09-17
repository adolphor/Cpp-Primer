/**
 * 9.2.7 关系运算符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/17
 */

#include <vector>

using std::vector;

int main(){
  /**
   * 两个容器进行比较的前提条件：
   * 1. 关系运算符左右两边的运算对象必须是相同类型的容器
   * 2. 且必须保存相同类型的元素
   */

  /**
   * 比较的方法：
   * 1. 如果两个容器具有相同大小且所有元素两两对应相等，则这两个容器相等；否则，两个容器不等。
   * 2. 如果两个容器大小不同，但较小容器中每个元素都等于较大容器中的对应元素，则较小容器小于较大容器。
   * 3. 如果两个容器都不是另一个容器的前缀子序列，则他们的比较结果取决于第一个不相等的元素的比较结果。
   */

  vector<int> v1 = { 1, 3, 5, 7, 9, 12 };
  vector<int> v2 = { 1, 3, 9 };
  vector<int> v3 = { 1, 3, 5, 7 };
  vector<int> v4 = { 1, 3, 5, 7, 9, 12 };

  v1 < v2; // true; v1 and v2 differ at element [2]: v1[2] is less than v2[2]
  v1 < v3; // false; all elements are equal, but v3 has fewer of them;
  v1 == v4; // true; each element is equal and v1 and v4 have the same size()
  v1 == v2; // false; v2 has fewer elements than v1

  return 0;
}
