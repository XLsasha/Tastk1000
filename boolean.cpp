#include <iostream>
#include <cmath>

using namespace std;

bool bool_1(int a)
{
    if(a > 0)
    {
        return 1;
    }
    return 0;
}

bool bool_2(int a)
{
    bool b = a%2;
    return b;
}

bool bool_3(int a)
{
    bool b =(a % 2)==0;
    return b;
}

bool bool_4(int a, int b)
{
    if(a > 2 && b <= 3)
    {
        return 1;
    }
    return 0;
}

bool bool_5(int a, int b)
{
    if(a >= 0 && b < -2)
    {
        return 1;
    }
    return 0;
}

bool bool_6(int a, int b, int c)
{
    if(a < b && b < c)
    {
        return 1;
    }
    return 0;
}

bool bool_7(int a, int b, int c)
{
    if(a < b && b < c || b < a && b > c)
    {
        return 1;
    }
    return 0;
}

bool bool_8(int a, int b)
{
    if((a % 2 !=0) && (b % 2 != 0))
    {
        return 1;
    }
    return 0;
}

bool bool_9(int a, int b)
{
    if(a % 2 == 0 || b % 2 == 0)
    {
        return 1;
    }
    return 0;
}

bool bool_10(int a, int b)
{
    if((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0))
    {
        return 1;
    }
    return 0;
}

//bool s 11 po 15 are the same

bool bool_16(int a)
{
    if(a%2==0 && a>9 && a<100)
    {
        return 1;
    }
    return 0;
}

bool bool_17(int a)
{
    if(a%2!=0 && a>99 && a<1000)
    {
        return 1;
    }
    return 0;
}

bool bool_18(int a, int b, int c)
{
    return a==b || a==c || b==c;
}

bool bool_19(int a, int b, int c)
{
    return (a==(-1)*b)|(a==(-1)*c)|(b==(-1)*c);
}

bool bool_20(int a)
{
    if((a / 100) != (a % 100 / 10) && (a / 100) != (a % 10) && (a % 100 / 10) != (a % 10))
    {
        return 1;
    }
    return 0;
}

bool bool_21(int a)
{
    return ((a/100)<(a%100/10)) && ((a%100/10)<(a%10));
}

bool bool_22(int a)
{
    double b = a % 100 / 10;
    double c = a/100;
    if(c > b && b > (a % 10) || c < b && b < (a % 10))
    {
        return 1;
    }
    return 0;
}

bool bool_23(int a)
{
    return a%10 == a/1000 & a%100/10 == a%1000/100;
}

bool bool_24(int a, int b, int c)
{
    int d = (b * b) - (4 * a * c);
    if(d>=0)
    {
        return 1;
    }
    return 0;
}

bool bool_25(int x, int y)
{
    if(x < 0 && y > 0)
    {
        return 1;
    }
    return 0;
}

bool bool_26(int x, int y)
{
    if(x > 0 && y < 0)
    {
        return 1;
    }
    return 0;
}

bool bool_27(int x, int y)
{
    if(x < 0 && y > 0 || x < 0 && y < 0)
    {
        return 1;
    }
    return 0;
}

bool bool_28(int x, int y)
{
    return x>0 && y>0 || x<0 && y<0;
}

bool bool_29(int x, int y, int x1, int y1, int x2, int y2)
{
    return x1<x && x<x2 && y2<y && y<y1;
}

bool bool_30(int a, int b, int c)
{
    return (a==b) & (a==c) & (b==c);
}

bool bool_31(int a, int b, int c)
{
    return a == b || a == c || c == b;
}

bool bool_32(int a, int b, int c)
{
    if((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
    {
        return 1;
    }
    return 0;
}

bool bool_33(int a, int b, int c)
{
    if ( (a+b) > c && (a+c) > b && (b+c) > a)
    {
        return 1;
    }
    return 0;
}

bool bool_34(int x, int y)
{
    if((x + y) % 2 != 0)
    {
        return 1;
    }
    return 0;
}

bool bool_35(int x1, int y1, int x2, int y2)
{
    if((x1 + y1) % 2 == (x2 + y2) % 2)
    {
        return 1;
    }
    return 0;
}

bool bool_36(int x1, int y1, int x2, int y2)
{
    if(x1 == x2 || y1 == y2)
    {
        return 1;
    }
    return 0;
}

bool bool_37(int x1, int y1, int x2, int y2)
{
    if(abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1)
    {
        return 1;
    }
    return 0;
}

bool bool_38(int x1, int y1, int x2, int y2)
{
    if(abs(x1 - x2) == abs(y1 - y2) || (x1 == x2) || (y1 == y2))
    {
        return 1;
    }
    return 0;
}

bool bool_39(int x1, int y1, int x2, int y2)
{
    if(abs(x1 - x2) == abs(y1 - y2) || (x1 == x2) || (y1 == y2))
    {
        return 1;
    }
    return 0;
}

bool bool_40(int x1, int y1, int x2, int y2)
{
    if(abs(x1 - x2) == 1 && abs(y1 - y2) == 2 || abs(x1 - x2) == 2 && abs(y1 - y2) == 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    cout << bool_32(3, 4, 5) << endl;
    return 0;
}
