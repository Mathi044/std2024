
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "objects.h"

// TODO: Implement
Car *car_create(char *brand, char *model, char *license){
    Car *c = malloc(sizeof(brand)+sizeof(model)+sizeof(license));
    c->brand = brand;
    c->model = model;
    c->license = license;
    return c;
}

Customer *customer_create(char *name, char *address){
    Customer *c = malloc(sizeof(name)+sizeof(address)+sizeof(address));
    c->name = name;
    c->address = address;
    return c;
}

Registry *registry_create(Customer **customers, int size){
   Registry *r = malloc(sizeof(customers)+sizeof(size));
   r->customers = customers;
   r->size = size;
   return r; 
}

void car_destroy(Car *car) {
    free(car->brand);
    free(car->model);
    free(car->license);
}

void customer_destroy(Customer *customer) {
    free(customer->name);
    free(customer->address);
    car_destroy(customer->car);
}

void registry_destroy(Registry *registry){
    //free(registry->size);

}

void link_car(Car *car, Customer *customer) {
 customer->car = car;
}

void print_registry(Registry *registry) {
    
}