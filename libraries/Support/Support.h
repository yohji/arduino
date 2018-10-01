#ifndef Support_h
#define Support_h

#include "Arduino.h"
#include <stdarg.h>

float voltage(int analogPin);
void echo(int n_args, ...);

#endif
