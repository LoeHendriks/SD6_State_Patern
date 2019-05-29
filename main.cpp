#include <iostream>
#include <unistd.h>
#include "Product/TrafficControl.h"
#include "Product/TrafficState.h"
#include "Product/RedLight.h"

bool running = true;
TrafficControl tc;
uint32_t count = 0;
uint32_t i = 0;
uint32_t seconds;

int main()
{
    
    while(running)
    {
        uint32_t var = 0;

        std::cout << "|-------------------------------------|" << std::endl;
        std::cout << "|State Pattern, Traffic Control       |" << std::endl;
        std::cout << "|SD6 Loe Hendriks & Stefan Vogelaar   |" << std::endl;
        std::cout << "|Menu                                 |" << std::endl;
        std::cout << "|(1) Start TrafficLight               |" << std::endl;
        std::cout << "|(2) Quit                             |" << std::endl;
        std::cout << "|-------------------------------------|" << std::endl;



        std::cin >> var;
        

        switch(var)
        {
            case 1:
            {
                while(1)
                {
                    if(i%3)
                    {
                        std::cout << "Cycle " << ((i+1)/3)+1 << std::endl;
                    }
                    if(count == 0)
                    {
                        seconds = 6;
                        count = 1;
                    }
                    else if(count == 1)
                    {
                        seconds = 4;
                        count = 2;
                    }
                    else if(count == 2)
                    {
                        seconds = 5;
                        count = 0;
                    }

                    
                    usleep(seconds*100000);
	                tc.Handle();
	                i++;
                }
                break;
            } 
            case 2:
            {
                running = false;
                break;
            }
            default:
                std::cout << "Error: Unknown Option" << std::endl;
                break;
        };
    }
    
}