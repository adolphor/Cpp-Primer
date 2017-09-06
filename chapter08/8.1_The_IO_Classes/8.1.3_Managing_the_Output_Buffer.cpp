/**
 * 8.1.3 管理输出缓冲
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/4
 */


#include <iostream>

using std::cout;
using std::endl;
using std::ends;
using std::flush;
using std::unitbuf;
using std::nounitbuf;

int main() {

  /**
   * 有了缓冲机制，操作系统就可以将程序的多个输出操作组合成单一的系统级写操作。由于设备的写操作可能很耗时，
   * 允许操作系统将多个输出操作组合为单一的设备写操作可以带来很大的性能提升。有了缓冲机制，文本串可能被缓存
   * 也可能直接打印。
   */

  /**
   * 刷新输出缓冲区：
   * 1. endl   字符串结尾换行，然后刷新缓冲区
   * 2. flush  刷新缓冲区，不附加任何额外字符
   * 3. ends   字符串结尾添加一个空字符，然后刷新缓冲区
   */
  cout << "Hello endl" << endl;
  cout << "Hello ends" << ends;
  cout << "Hello flush" << flush;

  /**
   * unitbuf & nounitbuf 操纵符
   * 如果想在每次输出后都刷新缓冲区，我们可以使用unitbuf操纵符。而nounitbuf操纵符则重置流，使其恢复使用正常的缓冲区刷新机制。
   */

  cout << unitbuf;

  cout << nounitbuf;

  /**
   * 关联输入和输出流
   * 不知道有啥用，暂时TODO
   */

  return 0;
}
