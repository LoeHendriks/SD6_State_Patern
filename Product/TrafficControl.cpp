#include "TrafficControl.h"

TrafficControl::TrafficControl()
{
    ts = new RedLight(this);
}

void TrafficControl::SetState(TrafficState* ts)
{
    this->ts = ts;
}

void TrafficControl::Handle()
{
    ts->Handle();
}