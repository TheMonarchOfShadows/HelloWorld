#include <iostream>
//#include <streambuf>

struct consoleStream : public std::ostream
{
public:

private:
    // static initialize
    static std::ios_base::Init init;
};

//Foo f; // static object

// static definition
std::ios_base::Init consoleStream;

int main()
{
    consoleStream;
    //std::ios_base::iostate goodbit = 0;
    std::ios_base().;
    std::ios_base::iostate good = std::ios_base::goodbit();

    std::ios_base::clear();
    console;
    std::cout << "main function\n";
}