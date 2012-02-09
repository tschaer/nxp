// masterapp.h
// 08.02.2012 T Schaer
#include "src/common.nxc"

// ----- General settings
// 1. MainTask cycle time
#define MAINCYCLETIME 300


// ----- HMI Settings
#define HMITASK 1

// 1. HmiTask cycle time
#define HMICYCLETIME 800

// 2. How many NXT mailboxes to use (0-10)
#define NOFMAILBOXES 1


// ----- Comm Settings
#define COMMTASK 1

#define NOFCOMMPARTNERS 1

#define NODETYPE MASTERNODE
#define ME "Master"
#define MASTER "Master"
#define SLAVE "Slave"  

// ------ Don't Touch
#include "src/nxp.h"
