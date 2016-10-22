
// Run Network Trainer for Neural Network

#include <iostream>

#include "network_trainer.h"

int main()
{
	Trainer::Trainer t;

	// - settings start -
	t.population_size = 100;
	t.round_max = 50000;
	t.sub_round_max = 60;
	t.input_min = 0;
	t.input_max = 2;
	t.hidden_layer_size = 4;
	t.mutate_mod = 0.1;
	t.mutate_chance = 0.3;  // X% chance for weight to mutate
	// - settings end -

	//debug = false;
	//verbose = false;

	t.train();

	return 0;
}