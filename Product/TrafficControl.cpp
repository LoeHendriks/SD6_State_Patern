#include "TrafficControl.h"

#include <cstddef>

TrafficControl::TrafficControl()
{
    ts = new RedLight(this);
}

TrafficControl::~TrafficControl()
{
    delete ts;
    ts = NULL;
}

void TrafficControl::SetState(TrafficState* ts)
{
    this->ts = ts;
}

void TrafficControl::Handle()
{
    ts->Handle();
}