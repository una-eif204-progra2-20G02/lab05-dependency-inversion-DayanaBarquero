//
// Created by dayan on 31/8/2020.
//

#ifndef MY_PROJECT_NAME_IBANKTRASACTIONS_H
#define MY_PROJECT_NAME_IBANKTRASACTIONS_H
#include <string>

class IBankTrasactions {
public:
    virtual std::string sendPayment() const = 0;

    virtual ~IBankTrasactions();
};


#endif //MY_PROJECT_NAME_IBANKTRASACTIONS_H
