#include <iostream>
#include <vector>
#ifndef ARRAY_BAG_
#define ARRAY_BAG_
class ArrayBag {
  ArrayBag();
  int CurrentSize()const;
  bool isEmpty () const ;
  bool add(const int & hey);
  bool remove (const int & hey);
  void clear ();
  bool contains (const int & hey);
  int getFrequencyOf(const int & hey);
 std::vector <int> toVector ();  
private:
static const int DEAFULT_CAPACITY = 6;
int items [DEAFULT_CAPACITY];
int itemCount;
int maxItems;
};
#endif