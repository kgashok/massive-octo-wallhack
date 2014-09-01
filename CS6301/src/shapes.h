// shapes.h
//

#ifndef LZZ_shapes_h
#define LZZ_shapes_h
#define LZZ_INLINE inline
class Shape
{
protected:
  int * width;
  int * height;
public:
  Shape (int a = 0, int b = 0);
  int area ();
  int get_dimension1 ();
  int * getHeight () const;
  void setHeight (int * height);
  int * getWidth () const;
  void setWidth (int * width);
};
class Rectangle : public Shape
{
public:
  Rectangle (int a = 0, int b = 0);
  int area ();
};
class Triangle : public Shape
{
public:
  Triangle (int a = 1, int b = 1);
  int area ();
};
#undef LZZ_INLINE
#endif
