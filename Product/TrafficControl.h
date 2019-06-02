#ifndef TRAFFICCONTROL_H
#define TRAFFICCONTROL_H

#include "TrafficState.h"
#include "RedLight.h"

class TrafficControl
{
public:
    TrafficControl();
    ~TrafficControl();
    void SetState(TrafficState* ts);
    void Handle();
private:
    TrafficState* ts;
};

#endif 