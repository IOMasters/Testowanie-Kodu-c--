#include <iostream>
#include <iomanip>
#include "examples/TestExample.cpp"
#include "examples/TestMojaSuperKlasa.cpp"
#include "macros/TestExecute.h"
#include "logger/ConsoleLogger.h"
using namespace std;

int main(int argc, const char* argv[]) {

	TestExecute exec(new ConsoleLogger());
	exec.addTests(new TestExample());
	exec.addTests(new TestExample1());
	exec.addTests(new TestExample2());
	exec.addTests(new TestMojaSuperKlasa());
	exec.runTests();


  return 0;
}