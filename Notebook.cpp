#include "Notebook.hpp"
#include "Direction.hpp"
using namespace std;
using ariel::Direction;

namespace ariel{
    Notebook::Notebook(){}
    void Notebook::write(unsigned int Page, unsigned int Row, unsigned int Column, Direction direction, string const &text){}
    string Notebook::read(unsigned int Page, unsigned int Row, unsigned int Column, Direction direction, unsigned int Length){ return "";}
    void Notebook::erase(unsigned int Page, unsigned int Row, unsigned int Column, Direction direction, unsigned int Length){}
    void Notebook::show( unsigned int page){}
}
