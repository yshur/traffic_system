#include <iostream>

#include "MatrixPoint.h"

using namespace std;

MatrixPoint::MatrixPoint(int hight, int width, int streetsLength) : m_hight(hight), m_width(width), m_streetsLength(streetsLength)
{
    m_streetsCount = 0;
    m_pointsMatrix = new Point *[m_width];
    for (int i = 0; i < m_width; i++)
    {
        m_pointsMatrix[i] = new Point[m_hight];

        for (int j = 0; j < m_hight; j++)
        {
            m_pointsMatrix[i][j] = new Point(i, j);
        }
    }
    m_streets = new Street[m_streetsLength];
}

void MatrixPoint::addStreet(int x, int y, int direction, int length, char *name)
{
    Point startPoint = m_pointsMatrix[x][y];
    Street newStreet = new Street(m_streetsCount + 1, startPoint, direction, length, name);
    for (int i = 0; i < length; i++)
    {
        if (direction == 0)
        {
            newStreet->addPoint(m_pointsMatrix[i][y]);
        }
        else if (direction == 1)
        {
            newStreet->addPoint(m_pointsMatrix[x][i]);
        }
    }
    m_streets[m_streetsCount] = newStreet;
    m_streetsCount++;
}

void MatrixPoint::print()
{
    for (int i = 0; i < m_width; i++)
    {
        for (int j = 0; j < m_hight; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                m_pointsMatrix[i][j]->print(k);
            }
        }
    }
    for (int i = 0; i < m_streetsCount; i++)
    {
        m_streets[i]->print();
    }
}