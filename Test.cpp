#include "doctest.h"
#include <iostream>
#include "Direction.hpp"
#include "Notebook.hpp"

using ariel::Direction;
using ariel::Notebook;
using namespace doctest;
using namespace std;

TEST_CASE("Check read")
{
    Notebook notebook;
            //GOOD
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 1) == "_");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 2) == "__");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 3) == "___");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 4) == "____");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 5) == "_____");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 6) == "______");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 7) == "_______");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 8) == "________");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 9) == "_________");
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 10) == "__________");


            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 1) == "_");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 2) == "__");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 3) == "___");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 4) == "____");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 5) == "_____");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 6) == "______");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 7) == "_______");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 8) == "________");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 9) == "_________");
            CHECK(notebook.read(10, 0, 0, Direction::Horizontal, 10) == "__________");

            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 1) == "_");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 2) == "__");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 3) == "___");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 4) == "____");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 5) == "_____");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 6) == "______");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 7) == "_______");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 8) == "________");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 9) == "_________");
            CHECK(notebook.read(100, 0, 0, Direction::Horizontal, 10) == "__________");

            //BAD:
            //According to the instructions we received in the task, the line length is known in advance and stands at 100 characters:
            CHECK_THROWS(notebook.read(0, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(1, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(2, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(3, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(4, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(5, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(6, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(7, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(8, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(9, 0, 101, Direction::Horizontal, 1));
            CHECK_THROWS(notebook.read(10, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(0, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(1, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(2, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(3, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(4, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(5, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(6, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(7, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(8, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(9, 0, 101, Direction::Horizontal, 10));
            CHECK_THROWS(notebook.read(10, 0, 101, Direction::Horizontal, 10));



}
TEST_CASE("Check write and read")
{
    Notebook notebook;
            CHECK_NOTHROW(notebook.write(0, 0, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(0, 0, 0, Direction::Horizontal, 3) == "Raz");
            CHECK_NOTHROW(notebook.write(10, 10, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(10, 10, 0, Direction::Horizontal, 3) == "Raz");
            CHECK_NOTHROW(notebook.write(100, 100, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(100, 100, 0, Direction::Horizontal, 3) == "Raz");
            CHECK_NOTHROW(notebook.write(10000, 10000, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(10000, 10000, 0, Direction::Horizontal, 3) == "Raz");
            CHECK_NOTHROW(notebook.write(20, 0, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(20, 0, 0, Direction::Horizontal, 3) == "RAZ");
            CHECK_NOTHROW(notebook.write(30, 10, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(30, 10, 0, Direction::Horizontal, 3) == "RAZ");
            CHECK_NOTHROW(notebook.write(40, 100, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(40, 100, 0, Direction::Horizontal, 3) == "RAZ");
            CHECK_NOTHROW(notebook.write(50, 10000, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(50, 10000, 0, Direction::Horizontal, 3) == "RAZ");


}




TEST_CASE("Check write, read and erase")
{
    Notebook notebook;
            //According to the instructions we received in the task if we have already written, or deleted to the specified place,
            // the function will throw an error
            CHECK_NOTHROW(notebook.write(500, 0, 0, Direction::Horizontal, "Raz"));
            CHECK(notebook.read(500, 0, 0, Direction::Horizontal, 3) == "Raz");
            notebook.erase(500, 0, 0, Direction::Horizontal, 1);
            //GOOD:
            CHECK(notebook.read(500, 0, 0, Direction::Horizontal, 1) == "~");
            //BAD:
            CHECK_THROWS(notebook.write(500, 0, 0, Direction::Horizontal, "r"));

            CHECK_NOTHROW(notebook.write(700, 0, 0, Direction::Horizontal, "test"));
            CHECK(notebook.read(700, 0, 0, Direction::Horizontal, 3) == "test");
            notebook.erase(700, 0, 0, Direction::Horizontal, 1);
            //GOOD:
            CHECK(notebook.read(700, 0, 0, Direction::Horizontal, 1) == "~");
            //BAD:
            CHECK_THROWS(notebook.write(700, 0, 0, Direction::Horizontal, "t"));

            CHECK_NOTHROW(notebook.write(207276775, 0, 0, Direction::Horizontal, "check"));
            CHECK(notebook.read(207276775, 0, 0, Direction::Horizontal, 5) == "check");
            notebook.erase(207276775, 0, 0, Direction::Horizontal, 1);
            //GOOD:
            CHECK(notebook.read(207276775, 0, 0, Direction::Horizontal, 1) == "~");
            //BAD:
            CHECK_THROWS(notebook.write(207276775, 0, 0, Direction::Horizontal, "c"));

            CHECK_NOTHROW(notebook.write(1212, 0, 0, Direction::Horizontal, "check"));
            CHECK(notebook.read(1212, 0, 0, Direction::Horizontal, 5) == "check");
            notebook.erase(1212, 0, 0, Direction::Horizontal, 1);
            //GOOD:
            CHECK(notebook.read(1212, 0, 0, Direction::Horizontal, 1) == "~");
            //BAD:
            CHECK_THROWS(notebook.write(1212, 0, 0, Direction::Horizontal, "c"));

            CHECK_NOTHROW(notebook.write(10000, 0, 0, Direction::Horizontal, "notebook"));
            CHECK(notebook.read(10000, 0, 0, Direction::Horizontal, 8) == "notebook");
            notebook.erase(10000, 0, 0, Direction::Horizontal, 1);
            //GOOD:
            CHECK(notebook.read(10000, 0, 0, Direction::Horizontal, 1) == "~");
            //BAD:
            CHECK_THROWS(notebook.write(10000, 0, 0, Direction::Horizontal, "n"));
}