/**
 * 6.5.1 默认实参
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/14
 */

#include <string>

using std::string;

typedef string::size_type sz;
// 默认实参
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');

int main(){
  /**
   * 但是要注意，默认实参按照顺序进行赋值初始化，不能跨过前面的参数进行后面默认值的修改
   */
  string window;
  window = screen(); // equivalent to screen(24,80,' ')
  window = screen(66);// equivalent to screen(66,80,' ')
  window = screen(66, 256); // screen(66,256,' ')
  window = screen(66, 256, '#'); // screen(66,256,'#')

  return 0;
}
