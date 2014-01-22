#include "AssertException.h"
#pragma once
namespace assertion {

#define AssertEqual(X,Y) AssertTrue((X)==(Y))
#define AssertNotNull(X) AssertTrue((X)!=0)
#define AssertNull(X) AssertTrue((X)==0)


	template<typename T>
	void AssertTrue (T a)
	{

	  if(!a)throw AssertException("Wartość  jest fałszem");

	}
}; // assertion