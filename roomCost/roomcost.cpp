#include <iostream>

using namespace std;

int getRoomNumbers(int roomSize) {
    
    string roomString = (roomSize == 0) ? "large" : "small";
    cout << "enter a number " << roomString << " rooms: \n";
    int numberRooms{ 0 };
    cin >> numberRooms;

    return numberRooms;
}

double totalRoomCost(int numberRoom, double roomRate) {
    return numberRoom * roomRate;
}

double taxesCost(double taxes, double jobCost) {
    return taxes * jobCost;

}

double totalcost(double taxRate, double jobCost) {
    return jobCost + taxesCost(taxRate, jobCost);
}


int main()
{
    const double smallRoomCost{ 25 };
    const double largeRoomCost{ 35 };
    const double taxes{ 0.06 };

    int smallRooms = getRoomNumbers(1);
    int largeRooms = getRoomNumbers(0);

    cout << "number of small rooms: $" << smallRooms << endl;
    cout << "number of large rooms: $" << largeRooms << endl;
 
    cout << "price per small room: $" << smallRoomCost << endl;
    cout << "price per large room: $" << largeRoomCost << endl;
    
    double jobTotal = totalRoomCost(smallRooms, smallRoomCost) + totalRoomCost(largeRooms, largeRoomCost);
    cout << "cost for number rooms: $" << jobTotal << endl;
    cout << "taxes: $" << taxesCost(taxes, jobTotal) << endl;

    cout << "total cost is: $" << totalcost(taxes, jobTotal) << endl;

    return 0;
}

