/**
 * 3.5.3 指针和数组
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/26
 */

#include <string>
#include <iostream>

using std::string;

using std::cout; using std::endl;

using std::begin; using std::end;

int main() {
  string nums[] = {"one", "two", "three"}; // 数组的元素是string对象
  string *p = &nums[0]; // p 指向 nums 的第一个对象
  string *p2 = nums;  // 在用到数组名字的地方，编译器自动将其替换为一个指向数组首元素的指针，等价于 string *p2 = &nums[0]
  // 所以，当数组作为一个auto变量的初始值时，推断得到的类型是指针而不是数组
  int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto ia2(ia); // ia2 是一个整形指针，指向ia的第一个元素
  auto ia3(&ia[0]); // 类似于上面的 ia2(ia)
  // 但是当使用decltype时，decltype(ia)返回的类型是由10数字构成的数组
  decltype(ia) ia4 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  ia4[3] = 110;

  // 指针也是迭代器
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *p3 = arr;
  cout << p3 << " => " << *p3 << endl;
  ++p3;
  cout << p3 << " => " << *p3 << endl;

  int *e = &arr[10]; // 指向arr尾元素下一位置的指针
  for (int *b = arr; b != e; ++b) { // 像使用迭代器遍历vector一样，使用指针遍历数组
    cout << *b << endl;
  }

  // 标准函数库 begin 和 end
  int *beg = begin(arr); // 返回指向arr首元素的指针
  int *last = end(arr);  // 返回指向arr尾元素的指针

  // 指针运算
  int *p4 = arr;    // 等价于 int *p4 = &arr[0];
  int *p5 = p4 + 4; // p5 指向 arr 的第五个元素 arr[4]
  int *p6 = p5 + 10;  // p6 运算的时候下标越界，指向arr尾元素的下一位置
  auto n = end(arr) - begin(arr); // 得到的结果是 arr 的数组大小

  // 比较(如果两个指针指向不同的对象，则不能进行比较)
  int *p7 = begin(arr);
  int *p8 = end(arr);
  while (p7 < p8) {
    ++p7;
  }

  // 解引用 和 指针运算的交互
  int *p9 = begin(arr);
  int iv1 = *(p9 + 3); // 把iv初始化未 arr[3]，也就是 3
  int iv2 = *p9 + 3;// 把iv2 初始化未3，也就是 0+3 = 3

  // 下标和指针
  int iv3 = arr[3]; // arr转为指向arr首元素的指针，arr[3]得到（arr+3）所指的元素
  int *p10 = arr; // p10 指向 arr 的首元素
  iv3 = *(p10 + 2); // 等价于 iv3 = arr[2];
  int *p11 = &arr[2];// p11 指向索引为2的元素
  int j = p11[1];// p11[1] 等价于 *(p11+1)；就是 arr[3]那个元素
  int k = p11[-2];// p11[-2]是arr[0]那个元素

  return 0;
}
