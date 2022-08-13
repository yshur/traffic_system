#ifndef __MATRIX_POINT_H
#define __MATRIX_POINT_H

class Point;
class Street;

class MatrixPoint
{
private:
    const int m_hight;
    const int m_width;
    Point **m_matrix;
    Street *m_streets;

public:
};

#endif __MATRIX_POINT_H