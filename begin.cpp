#include <iostream>
#include <math.h>

using namespace std;

//Begin group 1 - 40

const float Pi = 3.14;

int begin_1 (int a)
{
    int perimetr = 4*a;
    return perimetr;
}

int begin_2 (int a)
{
    int area = pow(a, 2);
    return area;
}

int begin_3 (int a, int b)
{
    int area = a*b;
    int perimetr = 2*(a+b);
    return perimetr;
}

float begin_4 (float d)
{
    float length = Pi*d;
    return length;
}

float begin_5(float a)
{
    float volume = pow(a, 3);
    float area = 6*(pow(a, 2));
    return area;
}

float begin_6(float a, float b, float c)
{
    float volume = a*b*c;
    float sum = (a*b)+(b*c)+(a*c);
    float area = 2*sum;
    return area;
}

float begin_7(float r)
{
    float length = 2*Pi*r;
    float area = Pi*pow(r, 2);
    return area;
}

float begin_8(float a, float b)
{
    return (a+b)/2;
}

float begin_9(float a, float b)
{
    return sqrt(abs(a)*abs(b));
}

float begin_10(float a, float b)
{
    a != 0;
    b != 0;
    float sum = a+b;
    float dif = a-b;
    float sqrt(a*b);
    float square1 = pow(a, 2)*pow(b, 2);
    float square2 = pow(a, 2)/pow(b, 2);
    return square1;
}

float begin_11(float a, float b)
{
    a != 0;
    b != 0;
    float sum = a+b;
    float dif = a-b;
    float sqrt(a*b);
    float square1 = abs(a)*abs(b);
    float square2 = abs(a)/abs(b);
    return square1;
}

float begin_12(float a, float b)
{
    float num1 = pow(a, 2);
    float num2 = pow(b, 2);
    float hypotenuse = sqrt(num1 + num2);
    float perimetr = a+b+hypotenuse;
    return perimetr;
}

float begin_13(float a, float b)
{
    if (a > b)
    {
        float s1 = Pi*pow(a, 2);
        float s2 = Pi*pow(b, 2);
        float s3 = s1 - s2;
        return s3;
    }
    return 0;
}

float begin_14(float l)
{
    float radius = l/(2*Pi);
    float area = Pi*(pow(radius, 2));
    return area;
}

float begin_15(float s)
{
    float diametr = 2*sqrt(s / Pi);
    float length = Pi*diametr;
    return diametr;
}

float begin_16(float x1, float x2)
{
    float distance = abs(x2 - x1);
    return distance;
}

float begin_17(float a, float b, float c)
{
    float distance1 = abs(a - c);
    float distance2 = abs(b - c);
    float sum = distance1 + distance2;
    return sum;
}

float begin_18(float a, float b, float c)
{
    float distance1 = abs(a - c);
    float distance2 = abs(b - c);
    float sum = distance1 * distance2;
    return sum;
}

float begin_19(float x1, float y1, float x2, float y2)
{
    float cord1 = abs(x1 - x2);
    float cord2 = abs(y1 - y2);
    float per = (cord1 + cord2) * 2;
    float area = cord1 * cord2;
    return per;
}

float begin_20(float x1, float y1, float x2, float y2)
{
    float a = pow((x2 - x1), 2);
    float b = pow((y2 - y1), 2);
    float distance = sqrt(a+b);
    return distance;
}

float begin_21(float x1, float y1, float x2, float y2, float x3, float y3)
{

    float a = pow((x2 - x1), 2);
    float b = pow((y2 - y1), 2);

    float c = pow((x3 - x2), 2);
    float d = pow((y3 - y2), 2);

    float e = pow((x3 - x1), 2);
    float f = pow((y3 - y1), 2);

    float distance1 = sqrt(a+b);
    float distance2 = sqrt(c+b);
    float distance3 = sqrt(c+a);

    float per = distance1 + distance2 + distance3;
    float halfPer = per/2;
    float num = halfPer*(halfPer-distance1)*(halfPer-distance2)*(halfPer-distance3);
    return sqrt(num);
}

float begin_22(float a, float b)
{
    a = a+b;
	b = a-b;
	a = a-b;
    return a;
}

// 23-24 same to 22

float begin_25(float x)
{
    float y = 3*pow(x,6)-6*pow(x,2)-7;
    return y;
}

float begin_26(float x)
{
    float y = 4*pow(x-3, 6)-7*pow(x-3, 3)+2;
    return y;
}

float begin_27(float a)
{
    float temp;
    temp = a*a;
    temp = temp*temp;
    temp = temp*temp;
    return temp;
}

//28 same to 27

float begin_29(float a)
{
    return a*Pi/180;
}

float begin_30(float a)
{
    return a*180/Pi;
}

float begin_31(float f)
{
    return (f - 32)*(5/9);
}

float begin_32(float c)
{
    return c*9/5+32;
}

float begin_33(float y)
{
    float a = 30;
    float x = 10;
    float price_1kg = a/x;
    float price_y_kg = price_1kg*y;
    return price_y_kg;
}

//34 same to 33

float begin_35(float v, float u, float t1, float t2)
{
     return v*t1+(v-u)*t2;
}

float begin_36(float v1, float v2, float s, float t)
{
     return s+v1*t+v2*t;
}

float begin_37(float v1, float v2, float s, float t)
{
     return abs(s-(v1*t+v2*t));
}

float begin_38(float a, float b)
{
    return -1*b/a;
}

float begin_39(float a, float b, float c)
{
     float d = pow(b,2)-4*a*c;
}

float begin_40(float a1, float b1, float c1, float a2, float b2, float c2)
{
    float d = a1*b2-a2*b1;
    float x = (c1*b2-c2*b1)/d;
    float y = (a1*c2-a2*c1)/d;
    cout << "X = " << x <<endl << "Y = " << y;
    return 0;
}

int main()
{
    cout << begin_40(2,10,5,2,6,7) << endl;
    return 0;
}
