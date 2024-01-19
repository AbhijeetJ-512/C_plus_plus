#include <iostream>
#include <cstring>
using namespace std;
int i = 0, k = 0;
class parking_manage
{
public:
    int no_hours;
    float total_wage;
    string no_plate;
    char v_type; // C-Car; B-Bike.
};
class hourly_calc : public parking_manage
{
public:
    void get_park_details()
    {
        cout << "Enter the Type (Car or Bike), Number plate, Number of hours the vehicle will be parked" << endl;
        cin >> v_type >> no_plate >> no_hours;
    }
    void calc_total()
    {
        if (v_type == 'C' || v_type == 'c')
        {
            total_wage = no_hours * 8.00;
        }
        if (v_type == 'B' || v_type == 'b')
        {
            total_wage = no_hours * 4.00;
        }
    }

public:
    void display_det()
    {
        if (v_type == 'c')
        {
            cout << "Car Number : " << no_plate << " hours parked : " << no_hours << " Total amount : " << total_wage << " Rupees" << endl;
        }
        if (v_type == 'b')
        {
            cout << "Bike Number : " << no_plate << " hours parked : " << no_hours << " Total amount : " << total_wage << " Rupees" << endl;
        }
    }
};
int main()
{

    hourly_calc a[10];
    string numberplt;
    while (1)
    {
        int ch;
        cout << "1.Vehicle enters 2.Vehicle leaves 3.Vehicle Spot Check 4.exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (i + 1 == 4)
            {
                cout << "parking slot Full" << endl;
                break;
            }
            else if (i + 1 == 3)
            {
                cout << "WARNING: Only ONE slot left" << endl;
            }
            a[i].get_park_details();
            a[i].calc_total();
            i++;
            break;
        case 2:
            // k = i;
            i--;
            cout << i << endl;
            a[i].display_det();
            break;
        case 3:
            cout << "Enter the number of the car" << endl;
            cin >> numberplt;
            for (int m = 0; m <= i; m++)
            {
                if (numberplt == a[m].no_plate)
                {
                    cout << "The vehicle (" << numberplt << "-Number) is parked at " << m << " Position" << endl;
                    break;
                }
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid syntax" << endl;
            break;
        }
    }
}