#ifndef POLYMER_H_
#define POLYMER_H_

class polymer
{
    private:
      double length;  // Length of a box
      int* elements;  // Breadth of a box
      int type;       // 1 = AA, 2 = AU, 3 = UA, 4 = UU, 0 = default
    public:
      polymer();
      ~polymer();
      int getElement(int);
      int getLength();
      int getType();
      void update();
};

#endif
