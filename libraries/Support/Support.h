#ifndef Support_h
#define Support_h

#include "Arduino.h"
#include <stdarg.h>

class Support {
public:
    static float voltage(int analogPin);
    static void echo(int n_args, ...);
};

#endif
