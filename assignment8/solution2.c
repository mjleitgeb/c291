#include <stdio.h>
#include <string.h>

struct Item {
        char * item;
        char * label;
        float price;
        int qty;
};
int main(void){
        char * vendingMachine[3][3];
        int choice = 0;
        int num_items = 9;
        float balance;
        float total;

      struct Item items[num_items];
      items[0].label ="A1";
      items[0].item = "Coke";
      items[0].price = 1;
      items[0].qty = 4;

      items[1].label ="A2";
      items[1].item = "Orange Soda";
      items[1].price = 3;
      items[1].qty = 4;

      items[2].label ="A3";
      items[2].item = "Rootbeer";
      items[2].price = 3;
      items[2].qty = 4;

      items[3].label ="B1";
      items[3].item = "Water";
      items[3].price = 3;
      items[3].qty = 4;

      items[4].label ="B2";
      items[4].item = "Grape Soda";
      items[4].price = 3;
      items[4].qty = 4;

      items[5].label ="B3";
      items[5].item = "Coke Zero";
      items[5].price = 3;
      items[5].qty = 4;

      items[6].label ="C1";
      items[6].item = "Cream Soda";
      items[6].price = 3;
      items[6].qty = 4;

      items[7].label ="C2";
      items[7].item = "Lemonade";
      items[7].price = 3;
      items[7].qty = 4;

      items[8].label ="C3";
      items[8].item = "Lime Soda";
      items[8].price = 3;
      items[8].qty = 4;

      items[9].label ="A1";
      items[9].item = "Juice";
      items[9].price = 3;
      items[9].qty = 4;
 
do
{
int x = 0;
for(int i = 0; i < 3; i++){
        printf("---------------------------------------------\n");
        for(int j = 0; j < 3; j++){
                vendingMachine[i][j] = "hello";
                printf("|%s - %s ", items[x].item, items[x].label);
                x++;
                        }
        printf("\n");
}
printf("---------------------------------------------\n");
printf("\n[1] Insert Money");
printf("\n[2] Check Current Balance");
printf("\n[3] Check Price");
printf("\n[4] Purchase");
printf("\n[5] Return change");
printf("\n[6] Owner Menu");
printf("\n[7] Exit");
printf("\nPlease select an option: ");
scanf("%d", &choice );

if(choice == 1){
  printf("\n");
  printf("Amount: \n" );
  scanf("%f", &balance);
  }

else if(choice == 2){
  printf("\n Current balance: %f .", balance);
}
else if(choice == 3){
  char user_label[2];
  printf("Label: \n");
  scanf("%s", user_label);
  int check = 0;

  for(int i = 0; i < num_items; i++){
    int result = strcmp(user_label, items[i].label);
    if(result == 0){
      printf("%s is $%f.\n", items[i].label, items[i].price);
      check = 1;
    }
   
  }
  if(check == 0){
    printf("%s does not exist.", user_label);
  }
}
else if(choice ==4 ){
  char user_label[2];
  printf("Label: \n");
  scanf("%s", user_label);

  int check = 0;
  
  for(int i = 0; i < num_items; i++){
    int result = strcmp(user_label, items[i].label);
    if(result == 0){
      balance = balance - items[i].price;
      if(balance > 0){
        printf("Label: %s\n", user_label);
        printf("You purchased a %s for $%f\n", items[i].item, items[i].price);
        total += items[i].price;
        }else{
          printf("You must insert more money.\n");
        }
     
      check = 1;
    }
}
  if(check == 0){
    printf("%s label does not exist.", user_label);
  }
  }
else if(choice == 5){
    printf("$%f is returned ", balance);
    balance = 0;
}
else if(choice ==6){
        int owner_choice = 0;
        while(owner_choice != 6){
                printf("\n");
                printf("Owner Menu");
                printf("\n1 - Add a new type of Item");
                printf("\n2 - Restock");
                printf("\n3 - Check Quantity");
                printf("\n4 - Take down a type of item");
                printf("\n5 - Check total sales");
                printf("\n6 -  Exit Owner Menu");
                printf("\nEnter a choice: ");
                scanf("%d", &owner_choice );

                if(owner_choice == 1){
                        char *m = NULL;
                        float inputPrice;
                      int check =0;
                        printf("Item item: \n");
                        scanf("%ms",&m);
                        printf("Item price: ");
                        scanf("%f", &inputPrice);

                    for(int i = 0; i < num_items; i++){
                        int result = strcmp(" ", items[i].item);
                        if(result == 0){
                          items[i].item = m;
                          items[i].price = inputPrice;
                          items[i].qty = 0;
                          check =1;
                        }
                      }
                      if(check == 0){
                        printf("There is no space in the vending machine.");
                      }  
                   
                  }
                else if(owner_choice == 2){
                    char user_label[2];
                    int restock = 0;
                    printf("Input label to restock: \n");
                    scanf("%s", user_label);
                    printf("Input quantity to restock: \n");
                    scanf("%d", &restock);
                    int check =0;

                    for(int i = 0; i < num_items; i++){
                        int result = strcmp(user_label, items[i].label);
                        if(result == 0){
                            items[i].qty += restock;
                            printf("%d %s is restocked.", restock, items[i].item );
                            check =1;
                        }
                      }
                      if(check == 0){
                        printf("%s label does not exist.", user_label);
                            }
                }
                else if(owner_choice == 3){
                    char user_label[2];
                    int check = 0;
                    printf("Input label to check quantity: \n");
                    scanf("%s", user_label);

                    for(int i = 0; i < num_items; i++){
                        int result = strcmp(user_label, items[i].label);
                        if(result == 0){
                            printf("The stock of %s is %d",items[i].item, items[i].qty);
                            check =1;
                        }
                      }

                    if(check == 0){
                        printf("%s label does not exist.", user_label);
                            }
                 
                }
                else if(owner_choice ==4 ){
                    char user_label[2];
                    int check = 0;
                    printf("Input label to take down: \n");
                    scanf("%s", user_label);

                    for(int i = 0; i < num_items; i++){
                        int result = strcmp(user_label, items[i].label);
                        if(result == 0){
                            items[i].item = " ";
                            items[i].price = 0;
                            items[i].qty = 0;
                            check =1;
                        }
                      }
                    if(check == 0){
                        printf("%s label does not exist.", user_label);
                            }
                }
                else if(owner_choice == 5){
                    printf("Total sales: $%f", total);
                }

        }
}

} while ((choice != 7));

}

