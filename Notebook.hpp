#include <string>
#include <iostream>
#include "Direction.hpp"
using namespace std;
using ariel::Direction;

namespace ariel{
    class Notebook {
    public:
        Notebook();
        void write(unsigned int Page, unsigned int Row, unsigned int Column, Direction direction, string const &text);
        static string read(unsigned int Page, unsigned int Row, unsigned int Column, Direction direction, int Length);
        void erase(unsigned int Page, unsigned int Row, unsigned int Column, Direction direction, int Length);
        void show( int Page);
    };
}

