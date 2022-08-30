#ifndef __MATRIX_POINT_H
#define __MATRIX_POINT_H

class Point;
class Street;

class MatrixPoint
{
private:
    const int m_hight;
    const int m_width;
    Point **m_pointsMatrix;
    Street *m_streets;
    const int m_streetsLength;
    int m_streetsCount;

public:
    MatrixPoint(int hight, int width, int streetsLength) {}
    void addStreet(int x, int y, int direction, int length, char *name) {}
    void print() {}
};

#endif __MATRIX_POINT_H