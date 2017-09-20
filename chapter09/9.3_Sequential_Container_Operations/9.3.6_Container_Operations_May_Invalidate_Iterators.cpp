/**
 * 9.3.6 容器操作可能使迭代器失效
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */

#include <vector>

using std::vector;

int main() {
  /**
   * 向容器中添加和从容器中删除元素的操作可能会使指向容器元素的指针、引用或迭代器失效。
   * TODO
   */

  /**
   * 编写改变容器的循环程序：程度必须保证每个循环步骤中都要更新迭代器、引用或指针。
   */
  // 傻瓜循环：删除偶数元素，复制每个奇数元素
  vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto iter = vi.begin();
  while (iter != vi.end()) {
    if (*iter % 2) {
      iter = vi.insert(iter, *iter);
      iter += 2;
    } else
      iter = vi.erase(iter);
  }

  /**
   * 不要保存end返回的迭代器：当我们添加/删除容器中的元素之后，原来end返回的迭代器总会失效，所以要在使用的时候重新调用end。
   */
  auto begin = vi.begin();
  while (begin != vi.end()) {       // 每次比较的时候，都调用一次end()方法，这样能够保证end不会无效
    ++begin;                        // 向前移动begin，因为我们想在此元素之后插入元素
    begin = vi.insert(begin, 42);   // 插入新值
    ++begin;                        // 向前移动begin，跳过我们刚刚加入的元素
  }

  return 0;
}
