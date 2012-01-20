// nxpmaster.h
// 19.01.2012 T Schaer

// ------ Application Settings
// 1. Set Master node name
#define ME "Master"
// 2. Set cyclic program execution period
#define CYCLETIME 500
// 3. Set the number of Slaves
#define NOFCOMMPARTNERS 1
// 4. Set Slave node name
#define SLAVE "Slave"

// ------ Don't Touch
#include "dictionary.nxc"
#include "jsonparse.nxc"
#include "jsonserialize.nxc"
#include "common.nxc"
#include "master.nxc"

