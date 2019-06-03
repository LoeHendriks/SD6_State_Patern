#include "YellowLight.h"
#include <iostream>

YellowLight::YellowLight(TrafficControl* context):context(context){}

YellowLight::~YellowLight()
{
    delete context;
    context = NULL;
}

void YellowLight::Handle()
{
    std::cout << "YellowLight" << std::endl;
    context->SetState(new RedLight(context));
}