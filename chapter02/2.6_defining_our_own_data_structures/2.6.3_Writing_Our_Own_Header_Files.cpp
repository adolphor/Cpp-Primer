/**
 * 2.6.3 编写自己的头文件
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/17
 */
int main(){
  /**
   * 头文件通常包含那些只能被包含一次的实体，如类，const，constexpr变量。
   * 头文件一旦改变，相关的源文件必须重新重新编译以获取更新过的声明。
   * Sales_data类的程序包含了两次string头文件：一次在Sales_data类中隐士包含，一次在程序中直接包含。
   * 预处理器 & 头文件保护符：为了解决多次包含能够正常处理。具体内容查看Sales_data.h实现即可。
   */
  return 0;
}
