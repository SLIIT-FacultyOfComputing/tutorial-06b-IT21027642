#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
   // 1. Create a Box type object called box1
   Box Box1;
  
  
   // ======= DO NOT CHANGE THE INPUT ===========
   int height, length, width;
   cout << "Enter the Height of the Box : ";
   cin >> height;

   cout << "Enter the Length of the Box : ";
   cin >> length;

   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
   Box1.setLength(length);
   Box1.setWidth(width);
   Box1.setHeight(height);
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << Box1.getHeight() << endl;
   cout << "Box Length " << Box1.getLength() << endl;
   cout << "Box Width " << Box1.getWidth() << endl;
   cout << "Volume of Box is " << Box1.calcVolume() << endl;
   // ==========================================
      return 0;
}

