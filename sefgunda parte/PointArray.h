#pragma once
#include"Point.h"
using namespace std;
class PointArray{
private:
    int size;
    Point* data;
public:
    PointArray(int size) {
        data = new Point[size];
        this->size = size;
    }
    PointArray(PointArray const &o){
        size = o.size;
        data = new Point[o.size];
        for (Point i = 0; i.getX() < size; i.setX(i.getX()+1)){
             data[i.getX()] = o.data[i.getX()]; 
        }
    }

    int getAt (int index) const {
        if (index >= 0 && index < size)
        return (data[index]).getX();
    }

    void setAt(int index, Point value) {
        int i = 0;
        if(index >= i && index < size)
        data[index] = value;
    }

    int get_size() const {
        return size;
    }

    void print() const {
        for(int i = 0; i < size; i++)
        cout << "(" << (data[i]).getX() << " , " <<  (data[i]).getY() << ") ";
        cout << endl;
       }

        ~PointArray(){
          delete data;
        }
};