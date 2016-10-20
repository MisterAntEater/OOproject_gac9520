#include "Order.h"
void Order::displayOrder(){
           //12345678901234567890
    cout << "\n\n--------------------\n\n";
    cout << "This is your robot order";
    cout << "\n\n--------------------\n\n";
    cout << "You are ordering " << Order::quantity << " robot(s) of model name " << Order::order_model.getModelName() << " on " << Order::sale_date;
    cout << "\n\t\tModel price:    " << Order::order_model.getSalesPrice() << "$/bot";
    cout << "\n\t\tQuantity:       " << Order::quantity;
    cout << "\n\t\tShipping:       " << Order::price_shipping << "$/bot";
    cout << "\n\n-------------------Subtotal:  " << Order::getPriceSubtotal() << "$";
    cout << "\n\n------------------After tax:  " << Order::getPriceTax() << "$";
    cout << "\n\n-------------------Shipping:  " << Order::getPriceShipping() << "$";
    cout << "\n\n----------------Final Price:  " << Order::getPriceTotal() << "$";
    cout << "\n\n";
}

string Order::getOrderNumber(){
    return Order::order_number;
}

Model Order::getOrderModel(){
    return Order::order_model;
}

string Order::getSaleDate(){
    return Order::sale_date;
}

int Order::getQuantity(){
    return Order::quantity;
}

double Order::getPriceTotal(){
    return Order::getPriceTax() + Order::getPriceShipping();
}
double Order::getPriceSubtotal(){
    return Order::order_model.getSalesPrice() * Order::getQuantity();
}
double Order::getPriceShipping(){
    return Order::price_shipping * Order::getQuantity();
}
double Order::getPriceTax(){
    return Order::getPriceSubtotal()*1.065; //the sales tax in TX is 6.5%
}
void Order::setOrderNumber(string num){
    Order::order_number = num;
}
void Order::setOrderModel(Model m){
    Order::order_model = m;
}

void Order::setSaleDate(string d){
    Order::sale_date = d;
}

void Order::setQuantity(int q){
    Order::quantity = q;
}

void Order::setPriceShipping(double ship_rate){
    Order::price_shipping = ship_rate;
}
