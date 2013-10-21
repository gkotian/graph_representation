#include <string>

class MyEdge
{
private:
    std::string m_edgeTo;
    unsigned int m_weight;

public:
    MyEdge();
    MyEdge(const std::string&, const unsigned int&);
    std::string getEdgeTo() const;
    unsigned int getWeight() const;
};
