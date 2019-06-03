#include "RedLight.h"
#include <iostream>

RedLight::RedLight(TrafficControl* context):context(context){}

RedLight::~RedLight()
{
    delete context;
    context = NULL;
}

void RedLight::Handle()
{
    std::cout << "RedLight" << std::endl;
    context->SetState(new GreenLight(context));
}