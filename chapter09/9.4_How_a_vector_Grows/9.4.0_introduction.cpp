/**
 * 9.4 vector对象时如何增长的
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */
int main(){

  /**
   * 扩容策略：每次需要扩容的时候，扩容数量大于等于需要的数量，避免频繁扩容。
   */

  /**
   * 管理容量的成员函数：
   * reserve操作允许我们通知容器它应该准备保存多少个元素。
   * capacity将会大于或等于传递给reserve的参数。
   * reserve和resize都不能减少容器预留的内存空间。
   * shrink_to_fit只是一个请求，并不保证能够退还未使用的内存。
   */

  /**
   * capacity：当前容器的大小
   * size：当前容器实际包含的元素的大小
   */
  return 0;
}
