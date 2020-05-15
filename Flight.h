#ifndef FLIGHT_H
#define FLIGHT_H
#define MAXFIRST 5;
#define MAXBUSINESS 10;
#define MAXECO 100;
#include <iostream>
#include "Airport.h"
#include <ctime>
using namespace std;


class Flight
{
    protected:
    // time
        time_t departuretime;
        time_t arivaltime;
    // 
        Airport departure; // departure destination
        Airport arrival;   // arrival destination
        string flightName; // VJ-696
        
        int flighID;        // ID of flight
        static int totalFlightID; // increase whenever instantiate a new flight 
        int curBusinesSeat = 0;
        int curEcoSeat = 0;
        int curFirstSeat = 0;

    public:
        Flight(string name, Airport departure, Airport arrival);
        virtual int priceCalculation(Airport departure, Airport arrival) = 0;

        string getName();        
        time_t getDepartureTime();
        time_t getArrivalTime();
        string getDeparture();
        string getArrival();
        int getID();
        int getCurBusinessSeat();
        int getCurEcoSeat();
        int getCurFirstSeat();        

        void setName(string name);
        void setDepartureTime(time_t aDeparturetime);
        void setArrivalTime(time_t aArrivaltime);
        void setDeparture(Airport aDeparture);
        void setArrival(Airport aArrival);
        int setCurBusinessSeat(int num);
        int setCurEcoSeat(int num);
        int setCurFirstSeat(int num);
        ~Flight();




};

#endif




