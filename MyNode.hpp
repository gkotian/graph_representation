#include <string>
#include <list>

#include "MyEdge.hpp"

class MyNode
{
private:
    std::string m_name;
    std::list<MyEdge> m_connections;

public:
    void setName(std::string);
    std::string getName() const;
    void addConnection(std::string, unsigned int);
    void showConnections() const;
};
