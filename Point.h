#ifndef __POINT_H
#define __POINT_H

class Street;

class Point
{
private:
    const int m_x;
    const int m_y;
    Street *m_streets;
    unsigned int m_countStreets = 0;

public:
    Point(int x, int y): m_x(x), m_y(y)
    {
    }

    const int getX() const { return m_x; }
    const int getY() const { return m_y; }
    Street *getStreets() { return m_streets; }
    int *getStreetsIDs();

    void addStreet(Street *newStreet);
    void rmStreet(Street *newStreet);

    void printPoint();
};

#endif __POINT_H
