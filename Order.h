#ifndef __ORDER_H
#define __ORDER_H 201609

#include "Model.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Order{
  public:
    void displayOrder();

    string getOrderNumber();
    Model getOrderModel();
    string getSaleDate();
    int getQuantity();
    double getPriceTotal();
    double getPriceSubtotal();
    double getPriceShipping();
    double getPriceTax();

    void setOrderNumber(string num);
    void setOrderModel(Model m);
    void setSaleDate(string d);
    void setQuantity(int q);
    void setPriceShipping(double ship_rate);
  private:
    int quantity;
    Model order_model;
    string order_number = "";
    string sale_date="";
    double price_shipping; 
};
#endif
