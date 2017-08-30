/**
 * 2.4 const 限定符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/5
 */

/**
 * 初始化和const
 * 默认状态下，const仅在当前文件下有效，如果想要多个文件共享，需要添加 `extern` 关键字
 */
extern const int shared = 512;  // extern 关键字修饰非变量要当做全局变量才能够进行初始化

int main() {

  /**
   * const 限定符（相当于Java中的final关键字）：const对象一旦创建后其值就不能再改变，所以 `const` 对象必须初始化
   */
  const int bufSize = 1024; // 输入缓冲区大小
  //  bufSize = 512; // 报错，不能更改值

  return 0;

}
