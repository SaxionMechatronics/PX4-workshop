/**
 * @file px4_simple_app.c
 * Minimal application example for PX4 autopilot
 *
 * @author Example User <mail@example.com>
 */

#include <px4_log.h>

__EXPORT int saxion_main(int argc, char *argv[]);

int saxion_main(int argc, char *argv[])
{
    PX4_INFO("Hello world!");
    return OK;
}
