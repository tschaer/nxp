// nxpslave.h
// 19.01.2012 T Schaer

// ------ Application Settings
// 1. Set Slave node name
#define ME "Slave"
// 2. Set cyclic program execution period
#define CYCLETIME 500
// 3. Set number of comm partners
#define NOFCOMMPARTNERS 1
// 4. Set Master node name
#define MASTER "Master"

// ------ Don't Touch
#include "dictionary.nxc"
#include "jsonparse.nxc"
#include "jsonserialize.nxc"
#include "common.nxc"
#include "slave.nxc"


