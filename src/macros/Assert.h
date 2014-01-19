#include "AssertException.h"

namespace assertion {

#define AssertEqual(X,Y) if(!(X)==(Y)) throw AssertException("Wartośc x nie jest równa wartośći y");
#define AssertNotNull(X) if((X)==0){throw AssertException("Wartość X jest rówan null");}
#define AssertTrue(X) if(!(X)) throw AssertException("Wartość X jest fałszem");
}; // assertion