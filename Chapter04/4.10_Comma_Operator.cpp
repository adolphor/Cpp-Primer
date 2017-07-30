/**
 * 4.10 逗号运算符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/29
 */

#include <vector>

using std::vector;

int main() {
  vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  /**
   * 逗号运算符：从左到右依次求值，
   */
  vector<int>::size_type cnt = ivec.size(); // assign values from size... 1 to the elements in ivec
  for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
    ivec[ix] = cnt;

  return 0;
}
