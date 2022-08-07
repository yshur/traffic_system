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
    Street(Point *startPoint, int direction, int length, char *name);

    const int getID() const { return m_id; }
    const Point *getStartPoint() const { return m_startPoint; }
    const int getDirection() const { return m_direction; }
    const int getLength() const { return m_length; }
    const char *getName() const { return m_name; }
    const Point *getPointsList() const { return m_pointsList; }
    void setName(char *name) { m_name = name; }
}

#endif __STREET_H