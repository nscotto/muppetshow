#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>

#ifdef DEBUG_MODE
#define DEBUG(x) do { std::cerr << "DEBUG (" __FILE__ ", " __LINE__ ": " << x; } while (0)
#else
#define DEBUG(x)
#endif


#endif /* DEBUG_H */
