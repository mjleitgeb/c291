#include<stdio.h>
#include<string.h>

#define numElements 3


typedef struct{
    char street[50];
    char city[50];
    char state[10];
    char zip[10];
}Address;

typedef struct{
    char name[25];
    double price;
}Product;

typedef struct{
    Product prod;
    int qty;
}Items;

typedef struct{
    Items * items;
    Address address;
}Invoice;


Address createAddress(char * street, char * city, char * state, char * zip){
    Address add;
    strcpy(add.street, street);
    strcpy(add.city, city);
    strcpy(add.state, state);
    strcpy(add.zip, zip);
    return add;
}

Product createProducts(char * name, double price){
    Product prod;
    strcpy(prod.name, name);
    prod.price = price;
    return prod;
}

Items createLineItem(Product prod, int quantity){
    Items item;
    item.prod = prod;
    item.qty = quantity;
    return item;
}

Invoice createInvoice(Items * items, Address Address){
    Invoice inv;  
    inv.items = items;
    inv.address = Address;
    return inv;
}

void printInvoice(Invoice invoice){
    printf("%10sI N V O I C E\n","");
    printf("\nSam's Small Appliances");
    printf("\n%s", invoice.address.street);
    printf("\n%s, %s %s\n\n", invoice.address.city, invoice.address.state, invoice.address.zip);

    
    printf("\nDescription \t\t%s", "Price Qty Total");
    
    double final_price = 0;
    
    for(int i=0; i<numElements; i++){
        
        double item_price = invoice.items[i].prod.price;
        int item_quant = invoice.items[i].qty;
        double item_total = item_price * item_quant;
        
        printf("\n%s \t%7s %0.2f  %d  %0.2f", invoice.items[i].prod.name, "",item_price, item_quant, item_total);
        
        final_price += item_total;
    }
    
    printf("\n\nAMOUNT DUE:  $%0.2f\n",final_price);
}

int main(void){
    
    Product prod1 = createProducts("Toaster", 29.95);
    Product prod2 = createProducts("Hair dryer", 24.95);
    Product prod3 = createProducts("Car vacuum", 19.99);
    
    Items items[numElements];
    
    items[0] = createLineItem(prod1, 3);
    items[1] = createLineItem(prod2, 1);
    items[2] = createLineItem(prod3, 2);

    Address address = createAddress("100 Main Street", "Anytown", "CA", "98765");

    Invoice invoice = createInvoice(items, address);
    
    printInvoice(invoice);

}
