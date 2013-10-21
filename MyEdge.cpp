#include <string>
#include <iostream>

#include "MyNode.hpp"

MyEdge::MyEdge() : m_edgeTo(""), m_weight(0)
{
}

MyEdge::MyEdge(const std::string& edgeTo, const unsigned int& weight) : m_edgeTo(edgeTo), m_weight(weight)
{
}

std::string MyEdge::getEdgeTo() const
{
    return m_edgeTo;
}

unsigned int MyEdge::getWeight() const
{
    return m_weight;
}
