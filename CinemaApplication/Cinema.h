#include<string>
#ifndef CINEMA_H
#define CINEMA_H


class Cinema
{
    int cinemaseating[12][4][4];
    int remainingseats[12];
    int cin1[12][4][4];


    public:
        Cinema();
        int cinemaKey;
        int cinemaOption;
        void showRunningCinema();
        void showSeatAvailibility(Cinema &c2);
        void bookTickets(Cinema &a);
        void checkBookingStatus(); //charName
        void writingBookingDetails(int,std::string s,std::string s1,std::string s2);
        void bookseats(int,int,int);
        void seatsoftheatre(int);
        int randomBookingCode();
        void deleteBooking(Cinema &c2);

};

#endif // CINEMA_H
