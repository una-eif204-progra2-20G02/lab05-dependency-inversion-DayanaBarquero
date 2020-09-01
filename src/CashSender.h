//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#include "IBankTrasactions.h"
#include <string>

class CashSender:IBankTrasactions {
public:
    std::string sendPayment() const override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
