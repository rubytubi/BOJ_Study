#include <iostream>

using namespace std;

class Rectangle {
public:
  Rectangle(int w, int h) {
    set_width(w);
    set_height(h);
  }

  int get_width() const { return width; }
  void set_width(int w) {
    if (w <= 0 || w > 1000)
      return;
    width = w;
  }

  int get_height() const { return height; }
  void set_height(int h) {
    if (h <= 0 || h > 2000)
      return;
    height = h;
  }

  int area() const { return width * height; }
  int perimeter() const { return 2 * width + 2 * height; }

  bool is_square() const { return width == height; }

private:
  int width;
  int height;
};