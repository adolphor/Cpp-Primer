/**
 * 9.3.5 改变容器的大小
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */

#include <list>

using std::list;

int main(){
  /**
   * 除了array之外，可以使用resize来增大或缩小容器
   */
  list<int> ilist(10, 42);    // 10个int，每个值都是42
  ilist.resize(15);           // 将5个值为0的元素添加到ilist末尾
  ilist.resize(25, -1);       // 将10个值为-1的元素添加到ilist末尾
  ilist.resize(5);            // 从ilist末尾删除20个元素

  return 0;
}
