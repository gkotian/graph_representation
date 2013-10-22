#include <iostream>
#include <string>
#include <list>

#include "MyNode.hpp"

void MyNode::setName(std::string name)
{
    m_name = name;
}

std::string MyNode::getName() const
{
    return m_name;
}

void MyNode::addConnection(std::string edgeTo, unsigned int weight)
{
    m_connections.push_back(MyEdge(edgeTo, weight));
}

void MyNode::showConnections() const
{
    for (std::list<MyEdge>::const_iterator i = m_connections.begin(); i != m_connections.end(); ++i)
    {
        std::cout << i->getEdgeTo() << "(" << i->getWeight() << ") -> ";
    }

    std::cout << std::endl;
}
