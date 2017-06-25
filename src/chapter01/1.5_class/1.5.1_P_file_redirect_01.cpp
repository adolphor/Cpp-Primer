#include <iostream>
#include "Sales_item.h" // 引入自定义的头文件不是 <>，而是 ""

/**
 * 文件重定向测试：
 * 1. 使用跟 "1.5.1_d01_read_write.cpp" 完全相同的代码
 * 2. 新建一个 1.5.1_P_file_redirect_01.md 的文件，内如是需要输入的参数 "0-201-X 3 20.00"
 * 3. 运行的时候分别使用如下命令：
 * - 3.1 ./a.out <1.5.1_P_file_redirect_01.md
 * - 3.2 ./a.out <1.5.1_P_file_redirect_01.md >1.5.1_P_file_redirect_01_result.md
 * 4. 分别查看命令行结果以及生成的 "1.5.1_P_file_redirect_01_result.md" 文件
 * @return
 */
int main() {
  Sales_item book;
  std::cin >> book;
  std::cout << book << std::endl;
  return 0;
}