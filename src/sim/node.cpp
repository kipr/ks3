#include <ks3/sim/node.hpp>

using namespace ks3;
using namespace ks3::sim;

Node::Node()
{
    
}

Node::~Node()
{
    
}

void Node::setPosition(const Vec3<r32> &position)
{
    _position = position;
}

const Vec3<r32> &Node::position() const
{
    return _position;
}