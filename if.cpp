#include <iostream>
#include <cmath>

using namespace std;

double if_1(double a)
{
    if(a>0)
    {
        return ++a;
    }
    return a;
}

double if_2(double a)
{
    if(a>0)
    {
        return ++a;
    }
    return a-2;
}

double if_3(double a)
{
    if(a>0)
    {
        return ++a;
    }
    else if(a<0)
    {
        return a-2;
    }
    return a=10;
}

double if_4(double a, double b, double c)
{
    int N;
    if (a>0) ++N;
    if (b>0) ++N;
    if (c>0) ++N;
    return N;
}

double if_5(double a, double b, double c)
{
    int N;
    if (a>0) ++N;
    if (b>0) ++N;
    if (c>0) ++N;
    return N;
}

double if_6(double a, double b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}

double if_7(double a, double b)
{
    if(a > b)
    {
        return 2;
    }
    return 1;
}

double if_8(double a, double b)
{
    if(a > b)
    {
        cout << "first - " << a << endl << "second - " << b;
    }
    else if(a < b)
    {
        cout << "first - " << b << endl << "second - " << a << endl;
    }
    return 0;
}

double if_9(double a, double b)
{
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "A:" << a << endl << "B:" << b << endl;
    }
    else
    {
        cout << "A:" << a << endl << "B:" << b << endl;
    }
    return 0;
}

double if_10(double a, double b)
{
    if (a == b)
    {
        a = 0;
        b = 0;
        cout << "A:" << a << endl << "B:" << b << endl;
    }
    else
    {
        a = a + b;
        b = a;
        cout << "A:" << a << endl << "B:" << b << endl;
    }
    return 0;
}

double if_11(double a, double b)
{
    double c;
    if (a != b)
    {
        if (a > b)
        {
            c = a + b;
            a = c - b;
            b = c - b;
        }
        else
        {
            c = a + b;
            b = c - a;
            a = c - a;
        }
        cout << "a:" << a << ' ' << "b:" << b << endl;
    }
    else
    {
        a = 0;
        b = 0;
        cout << "a:" << a << ' ' << "b:" << b <<endl;
    }
    return 0;
}

double if_12(double a, double b, double c)
{
    if(a < b && a < c)
    {
        return a;
    }
    else if(b < a &&  b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
    return 0;
}

double if_13(double a, double b, double c)
{
    if ((b <= a) && (a <= c) || (b >= a) && (a >= c))
    {
        return a;
    }
    else
    {
        if ((a <= b) && (b <= c) || (a >= b) && (b >= c))
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

double if_14(double a, double b, double c)
{
    double Max;
    double Min;
    if (a >= b && a >= c)
    {
        Max = a;
    }
    else if (b >= a && b >= c)
    {
        Max = b;
    }
    else
    {
        Max = c;
    }

    if (a <= b && a <= c)
    {
        Min = a;
    }
    else if (b <= a && b <= c)
    {
        Min = b;
    }
    else
    {
        Min = c;
    }

  cout << "Smallest: " << Min << endl << "Biggest: " << Max << endl;

  return 0;
}

double if_15(double a, double b, double c)
{
    if (b<=c&&b<=a) {
		return a+c;
	}
	else {
		if (a <= c && a <= b) {
			return b+c;
		}
		else {
            return b+a;
		}
	}
	return 0;
}

double if_16(double a, double b, double c)
{
    if(a > b && b > c)
    {
        a = a*2;
        b = b*2;
        c = c*2;
        cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
    }
    else
    {
        a=a*(-1);
        b=b*(-1);
        c=c*(-1);
        cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
    }
    return 0;
}

double if_17(double a, double b, double c)
{
    if(a > b && b > c || a < b && b < c)
    {
        a = a*2;
        b = b*2;
        c = c*2;
        cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
    }
    else
    {
        a=a*(-1);
        b=b*(-1);
        c=c*(-1);
        cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
    }
    return 0;
}

double if_18(double a, double b, double c)
{



