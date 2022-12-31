/*
 *  default-args.cpp
 *  Author: Mark Robrigado
 *  Date: 30 December 2022
 *  Description: Provides information on default function arguments.
*/

#include<iostream>

using std::cout;
using std::endl;

double calculate_cost(
    double base_cost, 
    double tax_rate = 0.06, 
    double shipping_cost = 3.5
);

int main() {

    /*
     *  Default arguments
     *  
     *  The compiler can use the default values when arguments are not supplied.
     *  Default values can be supplied in the prototype or definition but not both.
     *  Functions can have multiple default arguments and must appear on the tail 
     *  end of parameter list. 
    */

    cout << "calculate_cost(200.0) = "              // Uses default 0.06 tax_rate  
         << calculate_cost(200.0) << endl;          // and 3.5 shipping_cost

    cout << "calculate_cost(200.0, 0.1) = "         // Uses 0.1 as tax_rate and  
         << calculate_cost(200.0, 0.1) << endl;     // default shipping_cost
         
    cout << "calculate_cost(200.0, 0.1, 2.0) = "    // Uses 0.1 as tax_rate and 
         << calculate_cost(200.0, 0.1, 2.0);        //2.0 as shipping_cost

    return 0;
}

double calculate_cost(double base_cost, double tax_rate, double shipping_cost) {
    return base_cost += (base_cost * tax_rate) + shipping_cost;
}
