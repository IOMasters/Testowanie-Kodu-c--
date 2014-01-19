#include <iostream>
#include <iomanip>
#include "examples/TestExample.cpp"
#include "macros/TestExecute.h"
#include "logger/ConsoleLogger.h"
using namespace std;

int main(int argc, const char* argv[]) {

	TestExecute exec(new ConsoleLogger());
	exec.addTests(new TestExample());
	exec.runTests();


  return 0;
}