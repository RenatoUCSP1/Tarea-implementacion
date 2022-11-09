#include <iostream>
#include"PointArray.h"
#include "Point.h"
#include "DynamicPointArrray.h"
#include "DynamicIntArray.h"
using namespace std;

int main() {

    DynamicPointArray da;
    cout << da.getSize() << endl;

    int arreglo[] = {8, 9, 11, 5};
    DynamicIntArray da2(arreglo, 4);
    da2.print();
    DynamicIntArray da3 = da2;
    da3.print();

    da2.push_back(20);
    da2.print();
    da2.insert(30, 1);
    da2.print();
    da2.insert(5, 0);
    da2.print();

    da2.insert(100, 6);
    da2.print();
    da2.remove(6);
    da2.print();
    PointArray a(2);
    Point x_1(1,2);
    Point x_2(3,4);
    Point x_3(5,6);
    Point arr[3] {x_1,x_2, x_3};
    DynamicPointArray y(arr, 3);
    y.print();
    a.setAt(0,x_1);
    a.print();
    a.setAt(1,x_2);
    a.print();
    a.setAt(7,x_3);
    a.print();

 
    return 0;
}