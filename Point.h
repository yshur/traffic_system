#ifndef __POINT_H
#define __POINT_H

class Street;

class Point
{
private:
    const int m_x;
    const int m_y;
    Street *m_streets;
    unsigned int m_countStreets;
    int m_streetDirection;

public:
    Point(int x, int y) {}

    const int getX() const { return m_x; }
    const int getY() const { return m_y; }

    void addStreet(Street *newStreet);
    void rmStreet(Street *oldStreet);
    void print();
};

#endif // __POINT_H
