#include "Counter.h"
#include <iostream>

int Counter:: plus() {
    quantity++;
    return quantity;
}
int Counter::minus() {
    quantity--;
    return quantity;
}
void Counter::print_quantity() {
    std::cout << quantity << std::endl;
}
 void Counter::setquantity(int in_val) {
    quantity = in_val;
}
 Counter::Counter() {
     int in_val = 0;
     quantity = 1;
 }
   
 