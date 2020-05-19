#include<iostream>
#include "Economy.h"
#include "Flight.h"
#include "Ticket.h"
#define COEF 1; // coeffiecient for this flight type
using namespace std;
Economy::Economy(Flight* aFlight, string aName, string aDOB, string aSeatNumber) : Ticket(aFlight, aName, aDOB, aSeatNumber)
{
    flight = aFlight;
    name = aName;
    DOB = aDOB;
    seatNumber = aSeatNumber;
    type = "Economy";
    price = flight->getBasePrice()*COEF;
}

void Economy::setPrice()
{
    price = flight->getBasePrice()*COEF;
}