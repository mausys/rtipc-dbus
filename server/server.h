#pragma once

#include <systemd/sd-event.h>

#include <rtipc/rtipc.h>

typedef struct server server_t;


server_t* server_new(sd_event *event, ri_group_t *grp);
void server_delete(server_t* server);
