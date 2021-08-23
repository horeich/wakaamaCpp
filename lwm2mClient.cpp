#include "lwm2mClient.hpp"

#define OBJ_COUNT 4

LWM2MClient::LWM2MClient(/* args */)
{
}

LWM2MClient::~LWM2MClient()
{
}

void LWM2MClient::Run()
{
    client_data_t data;
    lwm2m_context_t * lwm2mH = NULL;
    lwm2m_object_t * objArray[OBJ_COUNT];
}