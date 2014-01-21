/**
 * FairMQTransportFactoryZMQ.cxx
 *
 * @since 2014-01-20
 * @author: A. Rybalchenko
 */

#include "FairMQTransportFactoryZMQ.h"

FairMQTransportFactoryZMQ::FairMQTransportFactoryZMQ()
{
    
}

FairMQMessage* FairMQTransportFactoryZMQ::CreateMessage()
{
    return new FairMQMessageZMQ();
}

FairMQMessage* FairMQTransportFactoryZMQ::CreateMessage(size_t size)
{
    return new FairMQMessageZMQ(size);
}

FairMQMessage* FairMQTransportFactoryZMQ::CreateMessage(void* data, size_t size)
{
    return new FairMQMessageZMQ(data, size);
}

FairMQSocket* FairMQTransportFactoryZMQ::CreateSocket(FairMQContext* context, int type, int num)
{
    return new FairMQSocketZMQ(context, type, num);
}
