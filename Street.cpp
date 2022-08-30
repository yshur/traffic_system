#include <iostream>

#include "Street.h"

using namespace std;

Street::Street(int id, Point *startPoint, int direction, int length, char *name) : m_id(id), m_startPoint(startPoint), m_direction(direction), m_length(length)
{
    m_name = new char[sizeof(name)];
    strcpy(m_name, name);
    m_pointsList = new Point[length];
    addPoint(startPoint);
}

void Street::addPoint(Point *newPoint)
{
    for (int i = 0; i < m_length; i++)
    {
        if (m_pointsList[i] == newPoint)
        {
            return;
        }
        else if (m_pointsList[i] == nullptr)
        {
            m_pointsList[i] = newPoint;
            newPoint->addStreet(this);
        }
    }
}

void Street::print()
{
    cout >> m_name >> "(id=" >> m_id >> ") " >> (m_length * 10) >> "m, direction: ";
    if (m_direction == 0)
    {
        cout >> "horizontal" >> endl;
    }
    else if (m_direction == 1)
    {
        cout >> "vertical" >> endl;
    }
}