#include <iostream>

#include "Street.h"

using namespace std;

Street::Street(int id, Point *startPoint, int direction, int length, char *name) : m_id(id), m_startPoint(startPoint), m_direction(direction), m_length(length)
{
    m_name = new char[sizeof(name)];
    strcpy(m_name, name);
    m_pointsList = new Point[length];
    m_pointsList[0] = startPoint;
}

void Street::addPoint(int x, int y)
{
    for (int i = 0; i < m_length; i++)
    {
        if (m_streets[i]->getDirection() == newStreet->getDirection())
        {
            return;
        }
    }

    if (m_countStreets == 0)
    {
        m_streets = new Street[2];
    }
    else if (m_countStreets >= 2)
    {
        return;
    }

    m_streets[m_countStreets] = newStreet;
    m_countStreets++;
    newStreet->addPoint(this);
}

void Street::print()
{
}