// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#define PI 3.1416

int add(int, int);
float add(float, float);
int my_abs(int);
float my_abs(float);
int max(int, int);
int max(int, int, int);

class Caaa{
public:
    int a;
    int b;
    int c;
};

class Cwin {
public:
    char id;
    int width;
    int height;
    char title[50];
    int area(void) {
        return width * height;
    }
    void set_title(void) {
        cin >> title;
    }
    void display(void) {
        cout << "Window " << id << ": ";
        cout << title << endl;
        cout << "Area= " << area() << endl;
    }
};

class CBox {
private:
    int length,width,height;
public:
    CBox(void) {
        length = 1;
        width = 1;
        height = 1;
    }
    CBox(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    int volume(void) {
        return length * width * height;
    }
    int surfaceArea(void) {
        return (length * width) * 2 + (height * length) * 2 + (height * width)*2;
    }
    void show(void) {
        cout << "Width=" << width << ", Height=" << height << ", Length=" << length << endl;
    }
};

class CRect {
public:
    int width;
    int height;
    double weight;
    void set(double wg) {
        weight=wg;
    }
    void set(int w, int h) {
        width = w;
        height = h;
    }
    void set(double wg, int w, int h) {
        width = w;
        height = h;
        weight = wg;
    }
    void show(void) {
        cout << "Width=" << width << ", Height=" << height << ", Weight=" << weight << endl;
    }
};

class CSphere {
private:
    int x;
    int y;
    int z;
    int radius;
public:
    void setLocation(int a, int b, int c) {
        if (a > 0 && b > 0 && c > 0) {
            x = a;
            y = b;
            z = c;
        }
        else {
            x = 0;
            y = 0;
            z = 0;
            cout << "Location input error!" << endl;
        }

    }
    void setRadius(int r) {
        if(r>0)
            radius = r;
        else {
            radius = 0;
            cout << "Radius input error!" << endl;
        }
    }
    double volume(void) {
        return 4 * PI * pow(radius, 3) / 3;
    }
    void showCenter() {
        cout << "center of circle:(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

class CRectangle {
private:
    int width;
    int height;
public:
    CRectangle(int w, int h) {
        width = w;
        height = h;
    }
    CRectangle(void) {
        width = 10;
        height = 8;
    }
    void display() {
        cout << "width=" << width << endl;
        cout << "height=" << height << endl;
    }
};



int main(void)
{
    /*3*/
    //int num;
    //num = 2;
    //cout << "I have " << num << " cats." << endl;
    //cout << "You have " << num << " cats, too." << endl;

    /*4*/
    //int num;
    //cout << "Enter a integer:";
    //cin >> num;
    //cout << "num=" << num << endl;

    /*5*/
    //int n, i = 1, sum = 0;
    //do
    //{
    //    cout << "Enter the value of n (n>0): ";
    //    cin >> n;
    //} while (n<=0);

    //do
    //    sum += i++;
    //while (i <= n);
    //cout << "1+2+...+" << n << '=' << sum << endl;

    /*6.7.*/
    //float sum, a = 5.2, b = 3.3;
    //sum = add(a, b);
    //cout << a << '+' << b << '=' << sum << endl;

    /*8*/
    //float n = -7.4;
    //n = my_abs(n);
    //cout << n << endl;

    /*9*/
    //int a = 3;
    //int b = 3;
    //int c = 8;
    //int m = max(a, b, c);
    //cout << m << endl;

    /*10*/
    //Caaa obj;
    //obj.a = 1;
    //obj.b = 3;
    //obj.c = obj.a + obj.b;
    //cout << obj.a << '+' << obj.b << '=' << obj.c << endl;

    /*11*/
    //Cwin win1;
    //win1.id = 'A';
    //win1.width = 50;
    //win1.height = 40;

    //win1.set_title();
    //win1.display();
    //cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;

    /*12*/
    //CBox box;
    //box.height = 2;
    //box.length = 4;
    //box.width=2;
    //cout << "Volume:" << box.volume() << endl;
    //cout << "Surfacearea:" << box.surfaceArea() << endl;

    /*13*/
    //CRect rect;
    //rect.set(3.5, 7, 5);
    //rect.show();

    /*15.16.*/
    //CSphere c;
    //c.setLocation(2, 3, 4);
    //c.setRadius(-5);
    //cout << "volume: " << c.volume() << endl;
    //c.showCenter();

    /*17*/
    //CRectangle r1(5, 4);
    //r1.display();
    //CRectangle r2;
    //r2.display();

    /*18*/
    CBox b1(2, 6, 4);
    b1.show();
    CBox b2;
    b2.show();


    return 0;
}



int max(int a, int b, int c) {   //要記起來~
    int n = a;
    if (n<b)
        n = b;
    if (n < c)
        n = c;
    return n;
}

int max(int a, int b) {
    if (a < b)
        return b;
    else
        return a;
}

float my_abs(float n) {
    if (n < 0)
        n = n * (-1);
    return n;
}

int my_abs(int n) {
    if (n < 0)
        n = n * (-1);
    return n;
}

float add(float num1, float num2) {
    float a;
    a = num1 + num2;
    return a;
}

int add(int num1, int num2) {
    int a;
    a = num1 + num2;
    return a;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
