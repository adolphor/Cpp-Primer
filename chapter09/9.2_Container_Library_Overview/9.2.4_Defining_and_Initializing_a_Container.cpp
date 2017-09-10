/**
 * 9.2.4 容器定义和初始化
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/9
 */

#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>

using std::string;
using std::vector;
using std::list;
using std::deque;
using std::forward_list;

int main(){
  /**
   * 每个容器类型都定义了一个默认构造函数，除array之外，其他容器的默认构造函数都会创建一个指定类型的空容器，、
   * 且都可以接受指定容器大小和元素初始值的参数。
   */

  /**
   * 将一个容器初始化未另一个容器的拷贝：
   * 1. 拷贝整个容器：两个容器的类型及其元素类型必须匹配
   * 2. 拷贝由一个迭代器对指定的元素范围：不要求容器类型和元素类型相同，但要能够进行类型转换
   */
  // 每个容器有三个元素，用给定的初始化器进行初始化
  list<string> authors = {"Milton", "Shakespeare", "Austen"};
  vector<const char*> articles = {"a", "an", "the"};
  list<string> list2(authors); // ok: 类型匹配
  deque<string> authList(authors); // error: 容器类型不匹配
  vector<string> words(articles); // error: 元素类型必须匹配
  // ok：可以将const char* 元素转型为string
  forward_list<string> words(articles.begin(), articles.end());

  /**
   * 列表初始化
   */
  // 每个容器有三个元素，用给定的初始化器进行初始化
  list<string> authors = {"Milton", "Shakespeare", "Austen"};
  vector<const char*> articles = {"a", "an", "the"};

  /**
   * 与顺序容器大小相关的构造函数
   */
  vector<int> ivec(10, -1);      // 10个int元素，每个都初始化为-1
  list<string> svec(10, "hi!");  // 10个strings，每个都初始化为hi
  forward_list<int> ivec(10);    // 10个元素，每个都初始化为10
  deque<string> svec(10);        // 10个元素，每个都是空string

  /**
   * 标准库array具有固定大小
   */


  return 0;
}

