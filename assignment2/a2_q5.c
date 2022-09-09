#include <stdio.h>

int main(void){
	char emp_type;
	double month;
	double year;
	double tax;
	double annual;
	double over_hour;
	double over_tot;
	double week;
	double hour;
	double prod_tot;
	double vac_month;
	int prod;
	char mar;
	char vac;

	printf("Enter employee type\n");
	scanf("%c", &emp_type);
	if(emp_type = 'A'){
		printf("Enter Monthly Salary\n");
		scanf("%lg", &month);
		year = month * 12;
		printf("Is this employee married?\n");
                scanf("%c", &mar);
		if(mar = 'y' && year >= 32000){
			tax = 0.75;
			annual = year * tax;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
		}
		else if(mar = 'y' && year <= 32000){
			tax = 0.90;
			annual = year * tax;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
		}
		else if(mar = 'n' && year >= 64000){
			tax = 0.75;
			annual = year * tax;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
		}
		else if(mar = 'n' && year <= 64000){
			tax = 0.90;
			annual = year * tax;
                	printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
		}
		
	}
	if(emp_type = 'S'){
                printf("Enter Monthly Salary\n");
                scanf("%lg", &month);
		printf("Enter number of overtime hours\n");
		scanf("%lg", &over_hour);
		over_tot = (over_hour/160) * (month) * (1.5);	
                year = month * 12;
                printf("Is this employee married?\n");
                scanf("%c", &mar);
                if(mar = 'y' && year >= 32000){
                        tax = 0.75;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'y' && year <= 32000){
                        tax = 0.90;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'n' && year >= 64000){
                        tax = 0.75;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'n' && year <= 64000){
                        tax = 0.90;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }

        }
	if(emp_type = 'E'){
                printf("Enter Monthly Salary\n");
                scanf("%lg", &month);
                printf("Enter number of overtime hours\n");
                scanf("%lg", &over_hour);
                over_tot = (over_hour/160) * (month) * (1.35);
                year = month * 12;
		printf("Is Employee taking vacation\n");
		scanf("%c", &vac);
		vac_month = month * 0.5;
		printf("How many products were sold\n");
		scanf("%d", &prod);
		prod_tot = prod * 600;
                printf("Is this employee married?\n");
                scanf("%c", &mar);
		if(vac = 'y'){
                	if(mar = 'y' && year >= 32000){
                        	tax = 0.75;
                        	annual = year * tax + over_tot - month + vac_month + prod_tot;
                        	printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                	}
                	else if(mar = 'y' && year <= 32000){
                        	tax = 0.90;
                        	annual = year * tax + over_tot - month + vac_month + prod_tot;
                        	printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                	}
                	else if(mar = 'n' && year >= 64000){
                        	tax = 0.75;
                        	annual = year * tax + over_tot - month + vac_month + prod_tot;
                        	printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                	}
                	else if(mar = 'n' && year <= 64000){
                        	tax = 0.90;
                        	annual = year * tax + over_tot - month + vac_month + prod_tot;
                        	printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                	}
		}
			else if(vac = 'n'){
			if(mar = 'y' && year >= 32000){
                                tax = 0.75;
                                annual = year * tax + over_tot + prod_tot;
                                printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                        }
                        else if(mar = 'y' && year <= 32000){
                                tax = 0.90;
                                annual = year * tax + over_tot + prod_tot;
                                printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                        }
                        else if(mar = 'n' && year >= 64000){
                                tax = 0.75;
                                annual = year * tax + over_tot + prod_tot;
                                printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                        }
                        else if(mar = 'n' && year <= 64000){
                                tax = 0.90;
                                annual = year * tax + over_tot + prod_tot;
                                printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                        }

        }
	}
	if(emp_type = 'P'){
                printf("Enter Weekly Salary\n");
                scanf("%lg", &week);
		printf("Enter number of overtime hours\n");
                scanf("%lg", &over_hour);
                over_tot = (over_hour/160) * (month);
                year = week * 48;
		printf("How many products were sold\n");
                scanf("%d", &prod);
		prod_tot = prod * 600;
                printf("Is this employee married?\n");
                scanf("%c", &mar);
                if(mar = 'y' && year >= 32000){
                        tax = 0.75;
                        annual = year * tax + over_tot + prod_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'y' && year <= 32000){
                        tax = 0.90;
                        annual = year * tax + over_tot + prod_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'n' && year >= 64000){
                        tax = 0.75;
                        annual = year * tax + over_tot + prod_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'n' && year <= 64000){
                        tax = 0.90;
                        annual = year * tax + over_tot + prod_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }

        }
	if(emp_type = 'H'){
                printf("Enter Hourly Salary\n");
                scanf("%lg", &hour);
                printf("Enter number of overtime hours\n");
                scanf("%lg", &over_hour);
                over_tot = (over_hour/160) * (month) * (1.25);
                year = hour * 480;
                printf("Is this employee married?\n");
                scanf("%c", &mar);
                if(mar = 'y' && year >= 32000){
                        tax = 0.75;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'y' && year <= 32000){
                        tax = 0.90;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'n' && year >= 64000){
                        tax = 0.75;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }
                else if(mar = 'n' && year <= 64000){
                        tax = 0.90;
                        annual = year * tax + over_tot;
                        printf("This employee's annual income is $%lg before tax and $%lg after tax.\n", year, annual);
                }

        }
}





