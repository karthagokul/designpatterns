#include <iostream>
#include "RoutingEngine.h"

using namespace std;

int main()
{
    RoutingEngine *engine=new RoutingEngine();
    engine->startGuidance();
    return 0;
}
