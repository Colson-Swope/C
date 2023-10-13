#include "ElectricCircuit.h"

double ComputeCurrent(ElectricCircuit* electricCircuit)
{
	double current = (*electricCircuit).voltage / (*electricCircuit).resistance;

	(*electricCircuit).voltage = 666;

	return current;
}