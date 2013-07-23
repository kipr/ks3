#ifndef _KS3_SIM_VEC3_HPP_
#define _KS3_SIM_VEC3_HPP_

#include <ks3/types.hpp>
#include <stdexcept>

namespace ks3
{
    namespace sim
    {
        template<typename T>
        class Vec3
        {
        public:
            Vec3()
            {
                _[0] = _[1] = _[2] = T();
            }
            
            Vec3(const T _0, const T _1, const T _2)
            {
                _[0] = _0;
                _[1] = _1;
                _[2] = _2;
            }
            
            T operator[](const u8 index) const
            {
                if (index > 2) {
                    throw std::out_of_range("vector index invalid");
                }
                
                return _[index];
            }
            
        private:
            T _[3];
        };
    }
}

#endif
