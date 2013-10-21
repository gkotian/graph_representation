#include <iostream>
#include <vector>
#include <string>
#include <list>

#include "MyNode.hpp"

void showEdgeListRepresentation(const std::vector<MyNode>& v)
{
    for (std::vector<MyNode>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        std::cout << i->getName() << " -> ";

        i->showConnections();
    }
}

int main()
{
    unsigned int numNodes = 0;

    std::cout << "Enter the number of nodes: " << std::endl;
    std::cin >> numNodes;

    std::vector<MyNode> v(numNodes);

    for (unsigned int i = 0; i < numNodes; ++i)
    {
        std::string name;
        unsigned int numConnectedNodes = 0;

        std::cout << "Node " << i + 1 << " details" << std::endl;
        std::cout << "    name: ";
        std::cin >> name;
        v[i].setName(name);

        std::cout << "    number of edges originating from " << name << ": ";
        std::cin >> numConnectedNodes;

        if (numConnectedNodes > 0)
        {
            v[i].setNumConnections(numConnectedNodes);
        }

        for (unsigned int j = 0; j < numConnectedNodes; ++j)
        {
            std::string edgeTo;
            unsigned int weight = 0;

            std::cout << "        name of remote node for edge # " << j + 1 << ": ";
            std::cin >> edgeTo;
            std::cout << "        weight of edge " << name << "->" << edgeTo << ": ";
            std::cin >> weight;

            v[i].addConnection(edgeTo, weight);
        }

        std::cout << std::endl;
    }

    showEdgeListRepresentation(v);

    return 0;
}

