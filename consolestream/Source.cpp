#include <iostream>
#include <streambuf>
#include <sstream>

// for copying string before output
struct captureBuffer : public std::streambuf
{
public:
    // working
protected:

private:
    std::ostringstream _capturedStream;
    std::string& _capturedString;
};
// for console
struct consoleStream : public std::ostream
{
public:

protected:


private:
    // static initialize
    static std::ios_base::Init init;

};

//Foo f; // static object

// static definition
std::ios_base::Init consoleStream;

int main()
{
    //consoleStream;
    //std::ostream(
    ////std::ios_base::iostate goodbit = 0;
    //std::ios_base().;
    //std::ios_base::iostate good = std::ios_base::goodbit();

    //std::ios_base::clear();
    //console;
    //std::cout << "main function\n";
}