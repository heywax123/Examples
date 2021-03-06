#include <iostream>

struct MyClass1
{
public:
  int GetId() const {return 1;}
};

struct MyClass2
{
public:
  int GetId() const {return 2;}
};

template <typename T>
void MyFunction(const T& object)
{
  std::cout << object.GetId() << std::endl;
}

int main(int argc, char *argv[])
{
  MyClass1 myClass1;
  MyFunction(myClass1);

  MyClass2 myClass2;
  MyFunction(myClass2);
  
  return 0;
}
