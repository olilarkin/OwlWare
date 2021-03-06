#ifndef __OWL_H__
#define __OWL_H__

#include <inttypes.h>
#include "ProgramVector.h"

#ifdef __cplusplus
 extern "C" {
#endif

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#ifndef min
#define min(a,b) ((a)<(b)?(a):(b))
#endif /* min */
#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif /* max */
#ifndef abs
#define abs(x) ((x)>0?(x):-(x))
#endif /* abs */

   uint16_t getAnalogValue(uint8_t index);
   void audioCallback(int16_t *src, int16_t *dst);
   void setButton(int bid, bool on);   
   void buttonChanged(int bid, bool on);   
   void updateButtons(uint16_t bid);   
   void setup(); // main OWL setup

#ifdef __cplusplus
}
   void updateProgramVector(ProgramVector*);
#endif

#endif // __OWL_H__
