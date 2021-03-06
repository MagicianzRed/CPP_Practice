# 第八章    IO库



## 8.1    IO 类

- #### IO 类型间的关系

  - 标准库可以使得我们忽略不同类型流之间的差异，因为他们通过**继承机制**实现
    - 简单来说，**继承机制使我们可以声明一个特定的类继承自另一个类，这个特定的类可以使用基类的所有方法**

### 8.1.1    IO 对象无拷贝或赋值

### 8.1.2    条件状态

- 用于访问和操纵 **流的条件状态**

- #### 检查流的状态

  - **badbit** 表示系统级错误，如，不可恢复的读写错误。
    - **一旦 badbit 被置位，流就无法再使用了**
  - **failbit** 表示可恢复错误，如，期望读取 数值 却读取到 字符
    - **这种问题通常是可以被修正的，流还可以正常使用**
  - **eofbit 和 failbit** 在文件结尾位置会被置位
  - **goodbit 的值为 0，表示流未发生错误**

- #### 管理条件状态

```c++
// 记住 cin 的当前状态
auto old_state = cin.rdstate();
/*使 cin 有效，不接受参数版本的 clear() 会复位所有错误标志位*/
cin.clear();
/*使用 cin */
process_input(cin);
/*将 cin 置为原有状态*/
cin.setstate(old_state);
```

### 8.1.3    管理输出缓冲

- **导致缓存刷新的原因**：
  - 程序正常结束，作为 main 函数的 return 操作的一部分，缓冲刷新被执行
  - 缓冲区满时，需要刷新缓冲，而后新的数据才能继续写入缓冲区
  - 我们可以使用操纵符如 endl 来显示刷新缓冲区
  - 在每个输出操作之后，我们可以用操纵符 unitbuf 设置流的内部状态，来清空缓冲区。
    - *在默认情况下，对 cerr 是设置 unitbuf 的，因此写到 cerr 的内容都是立即刷新的*
  - 一个输出流可能被关联到另一个流。
    - 在这种情况下，当读写被关联的流时，关联到的流的缓冲区会被立即刷新。
    - 默认情况下， cin 和 cerr 都会关联到 cout。因此，读 cin 或者 写 cerr 都会导致 cout 缓冲区刷新

- #### 刷新输出缓冲区

  ```c++
  cout << "hi" << endl;		// 输出 hi 和一个换行符，然后刷新缓冲区
  cout << "hi" << flush;		// 输出 hi, 然后刷新缓冲区，不附加任何额外字符
  cout << "hi" << ends;		// 输出 hi 和一个空字符，然后刷新缓冲区
  ```

- ### unitbuf 操纵符

  ```c++
  cout << unitbuf;			// 所有输出操作后都会立即刷新缓冲区
  /*使用 unitbuf 后，接下来的每一次写操作之后都会进行一次 flush 操作*/
  
  cout << nounitbuf;			// 回到正常的缓冲方式
  ```

  

- #### 关联输入和输出流

  - **交互式系统通常应当关联输入流和输出流**

  ```c++
  /*
  	tie() 不带参数版本，返回指向输出流的指针。
  	tie   的第二个版本，接受指向 ostream 的指针, 将自己关联到此 ostream
  */
  cin.tie(&cout);		// 标准库将 cin 和 cout 关联在一起
  
  ostream *old_tie = cin.tie(nullptr);	// cin 不再与其他流相关联
  // 将 cin 与 cerr 关联
  cin.tie(&cerr);			// 读取 cin 会刷新 cerr 而不是 cout
  cin.tie(old_tie);		// 重新建立 cin 和 cout 间的正常关联
  
  ```

  

## 8.2    文件输入输出

### 8.2.1    使用文件流对象

- #### 用 fstream 代替 iostream&

- #### 成员函数 open 和 close

  - **对一个已经打开的文件流调用 open 会失败**

- #### 自动构造和析构

  - **当一个 fstream 对象中被销毁时，close 会被自动调用**

### 8.2.2    文件模式

- **指定文件模式有如下限制：**

  - **只可以对 ofstream 或 fstream 对象设定 out 模式**

  - **只可以对 ifstream 或者 fstream 对象设定 in 模式**

  - **只有当 out 也被设定时才可以设定 trunc 模式**

  - **只要 trunc 没被设定，就可以设定 app 模式。（在 app 模式下，即使没有显示的指定 out 模式，文件也总是以输出的方式打开）**

  - **默认模式下，即使我们没有指定 trunc，以 out 模式打开的文件也会被截断。如果想保留以 out 模式打开的文件内容，我们必须同时指定 app 模式，这样只会将数据追加到文件末尾。或者同时指定 in 模式，即打开文件同时进行读写操作**

  - **ate 和 binary 模式可用于任何类型的文件流对象，且可以与其他任何文件模式组合使用**

    *关于文件模式的关键字在 P286*

- #### 以 out 模式打开文件会丢弃已有的数据

  - **默认情况下，当我们打开一个 ofstream 时，文件内容会被丢弃**

- #### 每次调用 open 时都会确定文件模式

## 8.3    string 流

*sstream 头文件定义了三个类型来支持内存IO，这些类型可以向 string 读写数据*

### 8.3.1    使用 istringstream

### 8.3.2    使用ostringstream













































