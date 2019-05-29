#include "RedLight.h"
#include <iostream>

RedLight::RedLight(TrafficControl* context):context(context){}

void RedLight::Handle()
{
    std::cout << "RedLight" << std::endl;
    context->SetState(new GreenLight(context));
}