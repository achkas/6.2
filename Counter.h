#pragma once

class Counter {
private:
    int quantity;
public:
    int in_val;
    int plus();
    int minus();
    void print_quantity();
    Counter();
    void setquantity(int in_val);
};

enum class command {
    plus = '+',
    minus = '-',
    equals = '=',
};