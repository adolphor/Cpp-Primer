/**
 * 9.3.4 特殊的forward_list操作
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */

#include <forward_list>

using std::forward_list;

int main() {
  /**
   * 主要是单向链表操作的时候会关系到前驱元素。
   */
  forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
  auto prev = flst.before_begin();  // 表示flst的首前元素
  auto curr = flst.begin();         // 表示flst的第一个元素
  while (curr != flst.end()) {      // 仍有元素要处理
    if (*curr % 2)                  // 若元素为奇数
      curr = flst.erase_after(prev);// 删除它并移动curr
    else {
      prev = curr;
      ++curr;                       // 移动迭代器指向下一个元素，prev指向curr之前的元素
    }
  }
  return 0;
}
