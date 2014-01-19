#include <exception>
using namespace std;

class AssertException 
{
public:
  AssertException(string m="exception!") : msg(m) {}

  const string what() const { return msg; }

private:
  string msg;
};