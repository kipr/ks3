#ifndef _KS3_SIM_NODE_HPP_
#define _KS3_SIM_NODE_HPP_

#include "vec3.hpp"

namespace ks3
{
    namespace sim
    {
        class Node
        {
        public:
            Node();
            ~Node();
            
            void setPosition(const Vec3<r32> &position);
            const Vec3<r32> &position() const;
            
        private:
            Vec3<r32> _position;
        };
    }
}

#endif
