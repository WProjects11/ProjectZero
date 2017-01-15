
/*

system
agent <> domain

William Gregory
1/1/2017

copyright 2017 (c) all rights reserved

check resource folder
github: RobRight

*/

// - SETTINGS -

// system
//#define S_DEBUG
//#define S_CONSOLE

// neural network:
#define NN_DEBUG
//#define NN_VERBOSE
//#define NN_TEST

// network trainer:
//#define NT_DEBUG
//#define NT_VERBOSE

// pendulum domain:
//#define PD_DEBUG
//#define PD_CONSULE
//#define PD_MIDLOG

// -   END	  -

#include "system.hpp"

// settings
unsigned int round_max = 2;
unsigned int agent_count = 1;
unsigned int run_type = 2;  // norm(1), train(2)
// -

int main() {

	System::System s;
	s.setup(round_max, agent_count, run_type);
	s.run();  // reset and run

	return 0;

}