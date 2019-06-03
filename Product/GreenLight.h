#ifndef GREENLIGHT_H
#define GREENLIGHT_H

#include "TrafficState.h"
#include "TrafficControl.h"
#include "YellowLight.h"

class TrafficControl;

class GreenLight : public TrafficState
{
public:
    GreenLight(TrafficControl* context);
    ~GreenLight();
    void Handle();
private:
    TrafficControl* context;
};

#endif