#include "Point.h"
#include "PointArray.h"
using namespace std;

class DynamicPointArray {
int size;
Point *data;
public:
 DynamicPointArray() {
this->size = 0;
data = new Point[0];
}
DynamicPointArray(const Point arr[], int size){
this->size = size;
data = new Point[size];
for(int i = 0; i < size; i++)
data[i] = arr[i];
}
DynamicPointArray(const DynamicPointArray &o) {
this->size = o.size;
this->data = new Point[o.size];
for(int i = 0; i < size; i++)
data[i] = o.data[i];
}
int getSize() const {
return size;
}
void print() const {
std::cout << "[ ";
for(int i = 0; i < size; i++)
cout << "(" << (data[i]).getX() << " , " << (data[i]).getY() << ") ";
cout << "]" << endl;
}
void push_back(Point elem) {
Point *tmp = new Point[size + 1];
for(int i = 0; i < size; i++)
tmp[i] = data[i];
tmp[size] = elem;
size += 1;
delete [] data;
data = tmp;
}
void insert(Point elem, int pos) {
Point *tmp = new Point[size + 1];
for(int i = 0, j = 0; i < size; i++, j++) {
if( j == pos) {
tmp[pos] = elem;
i--;
} else {
tmp[j] = data[i];
}        
}
size += 1;
delete [] data;
data = tmp;
} 
void remove(int pos) {
Point *tmp = new Point[size - 1];
for(int i = 0, j = 0; i < size; i++, j++) {
  if( j == pos)
  i++;
  tmp[j] = data[i];    
}
size -= 1;
delete [] data;
data = tmp;
}
~DynamicPointArray() {
delete[] data;
}
};