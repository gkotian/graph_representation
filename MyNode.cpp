#include <iostream>
#include <string>
#include <list>

#include "MyNode.hpp"

MyNode::MyNode() : m_name("")
{
}

MyNode::MyNode(MyNode&& other) : m_name(other.m_name), m_connections(std::move(other.m_connections))
{
}

MyNode& MyNode::operator=(MyNode&& other)
{
    if (this != &other)
    {
        m_connections = std::move(other.m_connections);
    }

    return *this;
}

void MyNode::setName(std::string name)
{
    m_name = name;
}

std::string MyNode::getName() const
{
    return m_name;
}

void MyNode::setNumConnections(unsigned int numConnections)
{
    m_connections.reset(new std::list<MyEdge>);
}

void MyNode::addConnection(std::string edgeTo, unsigned int weight)
{
    m_connections->push_back(MyEdge(edgeTo, weight));
}

void MyNode::showConnections() const
{
    if (m_connections)
    {
        for (std::list<MyEdge>::const_iterator i = m_connections->begin(); i != m_connections->end(); ++i)
        {
            std::cout << i->getEdgeTo() << "(" << i->getWeight() << ") -> ";
        }
    }

    std::cout << std::endl;
}
