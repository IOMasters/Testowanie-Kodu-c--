#include "AssertException.h"

namespace assertion {

#define AssertEqual(X,Y) if(!(X)==(Y)) throw AssertException("Wartośc nie są sobie równe");
#define AssertNotNull(X) if((X)==0){throw AssertException("Wartość jest rówan null");}
#define AssertNull(X) if((X)!=0){throw AssertException("Wartość nie jest rówan null");}
#define AssertTrue(X) if(!(X)) throw AssertException("Wartość  jest fałszem");
}; // assertion