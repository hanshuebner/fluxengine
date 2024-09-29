#pragma once

#define APPLESAUCE_VID 0x16c0
#define APPLESAUCE_PID 0x0483

#define APPLESAUCE_ID ((APPLESAUCE_VID << 16) | APPLESAUCE_PID)

extern Bytes applesauceToFluxEngine(const Bytes& asdata);
extern Bytes fluxEngineToApplesauce(const Bytes& fldata);
