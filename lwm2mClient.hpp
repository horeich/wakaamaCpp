#ifndef LWM2M_CLIENT_HPP
#define LWM2M_CLIENT_HPP

#include "wakaama/include/liblwm2m.h"
#include "wakaama/examples/shared/connection.h"

class LWM2MClient
{
private:
    typedef struct
    {
        lwm2m_object_t *securityObjP;
        int sock;
        connection_t *connList;
        int addressFamily;
    } client_data_t;

public:
    LWM2MClient(/* args */);
    ~LWM2MClient();

    void Run();
};

#endif