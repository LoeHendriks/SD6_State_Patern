#ifndef REDLIGHT_H
#define REDLIGHT_H

#include "TrafficState.h"
#include "TrafficControl.h"
#include "GreenLight.h"

class TrafficControl;

class RedLight : public TrafficState
{
public:
    RedLight(TrafficControl* context);
    void Handle();
private:
    TrafficControl* context;
};

#endif