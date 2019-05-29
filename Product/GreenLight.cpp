#include "GreenLight.h"
#include <iostream>

GreenLight::GreenLight(TrafficControl* context):context(context){}

void GreenLight::Handle()
{
    std::cout << "GreenLight" << std::endl;
    context->SetState(new YellowLight(context));
}