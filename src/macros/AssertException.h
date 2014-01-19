#include <exception>
using namespace std;

class AssertException 
{
public:
  AssertException(string m="exception!") : msg(m) {}

  const char* what() const { return msg.c_str(); }

private:
  string msg;
};