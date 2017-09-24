#include "RoutingEngine.h"

class RoutingEnginePrivate
{
public:
    RoutingEnginePrivate()
    {

    }
    virtual ~RoutingEnginePrivate()
    {

    }
    void findRoute(long startLat,long startLong,long endLat,long endLong)
    {
            // Complex Algorithemix calls.
    }
    void startGuidance()
    {

    }
private:
//    Digistra *mAlgorithm;
};
RoutingEngine::RoutingEngine():d(new RoutingEnginePrivate())
{
}

RoutingEngine::~RoutingEngine()
{
    delete d;
}

void RoutingEngine::findRoute(long startLat,long startLong,long endLat,long endLong)
{
    return d->findRoute(startLat,startLong,endLat,endLong);
}
void RoutingEngine::startGuidance()
{
    return d->startGuidance();
}
