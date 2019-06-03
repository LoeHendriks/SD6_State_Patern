#ifndef YELLOWLIGHT_H
#define YELLOWLIGHT_H

#include "TrafficState.h"
#include "TrafficControl.h"
#include "RedLight.h"

class TrafficControl;

class YellowLight : public TrafficState
{
public:
    YellowLight(TrafficControl* context);
    ~YellowLight();
    void Handle();
private:
    TrafficControl* context;
};

#endif