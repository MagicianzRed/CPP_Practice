#include <iostream>
/*
* 1>E:\study\C++_Chapter2\2.1\2.6.1.cpp(9,1): error C2628: “MyStruct”后面接“int”是非法的(是否忘记了“;”?)
1>E:\study\C++_Chapter2\2.1\2.6.1.cpp(10,1): error C3874: “main”的返回类型应为“int”而非“MyStruct”
1>E:\study\C++_Chapter2\2.1\2.6.1.cpp(12,13): error C2440: “return”: 无法从“int”转换为“MyStruct”
1>E:\study\C++_Chapter2\2.1\2.6.1.cpp(12,13): message : 无构造函数可以接受源类型，或构造函数重载决策不明确
*/
#if 0
struct MyStruct
{

}


int main()
{

    return 0;
}

#endif