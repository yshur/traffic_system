#ifndef __STREET_H
#define __STREET_H

class Point;

class Street
{
private:
    const int m_id;
    const Point *m_startPoint;
    const int m_direction;
    const int m_length;
    char *m_name;
    Point *m_pointsList;

public:
    Street(int id, Point *startPoint, int direction, int length, char *name);

    const int getID() const { return m_id; }
    const int getDirection() const { return m_direction; }
    const char *getName() const { return m_name; }

    void addPoint(Point *newPoint);
    void print();
};

#endif __STREET_H