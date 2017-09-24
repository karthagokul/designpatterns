#ifndef ROUTINGENGINE_H
#define ROUTINGENGINE_H

#include <string>
#include <iostream>

class RoutingEnginePrivate;

class RoutingEngine
{
public:
    RoutingEngine();
    virtual ~RoutingEngine();
    void findRoute(long startLat,long startLong,long endLat,long endLong);
    void startGuidance();

private:
    RoutingEnginePrivate *d;
};


#endif // ROUTINGENGINE_H
