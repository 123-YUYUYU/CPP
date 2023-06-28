#include <iostream>
using namespace std;

//值传递
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;
}
// 地址传递
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;   
}
// 引用传递
    int mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//mySwap02(a,b);    值传递， 形参不会修饰实参
//mySwap03(&a, &b); 地址传递，形参会修饰实参的
int main()
{
    int a = 10;
    int b = 20 ;
    
    mySwap02(&a, &b);

    cout << "a =  " << a << endl;
    cout << "b =  " << b << endl;
    system("pause");
    
    return 0;

}