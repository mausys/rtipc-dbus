#pragma once

#include <systemd/sd-event.h>

#include <rtipc/rtipc.h>

typedef struct client client_t;

client_t* client_new(ri_group_t *grp, sd_event *event);
