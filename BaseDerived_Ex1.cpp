#include<iostream>
#include<string>
#include<unordered_map>
#include <array>
using namespace std;
class Shape{
  protected:
    int width;
    int height;
    public:
    Shape(int width, int height)
    {
        this->width = width;
        this->height = height;
        cout<<"Base class constructor called\n";
    }
    virtual int calcArea() = 0;
};

class Traiangle:public Shape
{
    private:
        int area;
    public:
        Traiangle(int width, int height):Shape(width, height){
            cout<<"Triangle class constructor called\n";
        }
        int calcArea()
        {
           area = (width*height)/2;
            return area;
        }
};

class Rectangle:public Shape
{
    private:
        int area;
    public:
    Rectangle(int width, int height):Shape(width,height){
        cout<<"Rectangle class constructor called\n";
    }
        int calcArea()
        {
            area = (width*height);
            return area;
        }
};

int main()
{
  class Traiangle c1(10,10);
  class Rectangle c2(10,10);
  cout<<"area of Traiangle = "<<c1.calcArea()<<endl;
  cout<<"area of Rectangle = "<<c2.calcArea()<<endl;
    return 0;
}