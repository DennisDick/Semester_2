#include <iostream>

namespace my_awesome_namespace
{
    class AwesomeClass
    {
        public:
        int8_t a = 0;
        float b = 0.0F;

        void print () const
        {
            std::cout << "a = " << a << "; b = " << b << std::endl;
        }

    };
}

auto main() -> int
{
    my_awesome_namespace::AwesomeClass my_class;
    my_class.print();
}