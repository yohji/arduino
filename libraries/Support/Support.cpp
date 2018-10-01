#include "Support.h"

float Support::voltage(int analogPin)
{
    return (analogRead(analogPin) / 1023.0f) * 5.0;
}

void Support::echo(int n_args, ...)
{
    va_list ap;
    va_start(ap, n_args);

    if (n_args == 1) {
        Serial.println(va_arg(ap, int));
    }
    else {
        String buffer = "";
        for (size_t loop = 0; loop < n_args; ++loop) {

            if (buffer.length() != 0)
                buffer.concat("\t");

            buffer.concat(va_arg(ap, int));
        }

        Serial.println(buffer);
    }

    va_end(ap);
}
