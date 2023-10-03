#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
public:
    Invoice(std::string invoiceId);
    void addServiceCost(double costDollars);
    double getDollarsOwed() const;
    std::string getInvoiceId() const;

private:
    std::string invoiceId;
    double dollarsOwed;
};

#endif // INVOICE_H
