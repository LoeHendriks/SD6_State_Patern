#include "YellowLight.h"
#include <iostream>

YellowLight::YellowLight(TrafficControl* context):context(context){}

void YellowLight::Handle()
{
    std::cout << "YellowLight" << std::endl;
    context->SetState(new RedLight(context));
}