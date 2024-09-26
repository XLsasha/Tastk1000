#include <iostream>
#include <cmath>

using namespace std;

int int_1(int l)
{
    return l/100;
}

int int_2(int m)
{
    return m/1000;
}

int int_3(int s)
{
    return s/1024;
}

int int_4(int a, int b)
{
    return a/b;
}

int int_5(int a, int b)
{
    return a%b;
}

int int_6(int  a)
{
    int b = a/10;
    int c = a%10;
    cout << "10: " << b << endl << "1: " << c <<endl;
    return 0;
}

int int_7(int  a)
{
    int b = a/10;
    int c = a%10;
    int sum = b+c;
    int mult = b*c;
    return sum;
}

int int_8(int a)
{
    int b = a/10;
    int c = a%10*10;
    return b+c;
}

int int_9(int a)
{
    return a/100;
}

int int_10(int a)
{
     int b = a%10;
     int c = a%100/10;
     cout << "first: " << b << endl << "middle: " << c << endl;
     return 0;
}

int int_11(int a)
{
    int b = a%10;
    int c = a%100/10;
    int d = a/100;
    int sum = b+c+d;
    int mult = b*c*d;
    return sum;
}

int int_12(int a)
{
    int b = a%10;
    int c = a%100/10;
    int d = a/100;
    cout<< b << c << d <<endl;
    return 0;
}

int int_13(int a)
{
    int b = a/100;
    int c = b*100;
    int d = a-c;
    cout<< d << b <<endl;
    return 0;
}

int int_14(int a)
{
    return (a%10)*100+(a/100)*10+(a%100/10);
}

int int_15(int a)
{
    int b = a/100;
    int c = (a/10)%10;
    int d = a%10;
    return c*100+b*10+d;
}

int int_16(int abc)
{
    return (abc / 100) * 100 + (abc % 10) * 10 + (abc % 100 / 10);
}

int int_17(int a)
{
    return a % 1000 / 100;
}

int int_18(int a)
{
    return a % 10000 / 1000;
}

int int_19(int n)
{
    return n/60;
}

int int_20(int n)
{
    return n/60/60;
}

int int_21(int n)
{
    return n%60;
}

int int_22(int n)
{
    return n%3600;
}

int int_23(int n)
{
    return n%3600/60;
}

//пропускаю с 24 по 27 потому что в 28 создается функция способная расчитывать для любого дня недели от 1-го января

int int_28(int k, int n)
{
    n = n - 2;
    return ((k + n) % 7) + 1;
}

int int_29(int a, int b, int c)
{
    return (a*b)/(c*c);
}

int int_30(int a)
{
    return ((a-1)/100)+1;
}

int main()
{
    cout << int_30(1401) << endl;
    return 0;
}
