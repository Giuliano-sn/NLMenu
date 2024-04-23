# Arduino Non-locking Menu

Time is a library that provides a non-locking menu with reading sensors and run actuators functionalities for Arduino.

Using the Arduino Library Manager, install "*NLMenu* by *Giuliano Nascimento*".


## Functionality

To use the Time library in an Arduino sketch, include NLMenu.h.

```c
#include <NLMenu.h>
```

The functions available in the library include

```c
enable();       // enable devices
disable();      // disable dvices
run();          // read sensors, run actuators, check menu buttons and show menu if needed
```


## Examples

The NLMenu directory contains the library and some example sketches
illustrating how the library can be used with various time sources:

- `Basic` Basic utilization

