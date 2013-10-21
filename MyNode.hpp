#include <string>
#include <list>
#include <memory>

#include "MyEdge.hpp"

class MyNode
{
private:
    std::string m_name;
    std::unique_ptr< std::list<MyEdge> > m_connections;

public:
    MyNode();
    MyNode(const MyNode&) = delete; // no copy-constructor
    MyNode& operator=(const MyNode&) = delete; // no copy-assignment-operator
    MyNode(MyNode&&);
    MyNode& operator=(MyNode&&);
    void setName(std::string);
    std::string getName() const;
    void setNumConnections(unsigned int);
    void addConnection(std::string, unsigned int);
    void showConnections() const;
};
