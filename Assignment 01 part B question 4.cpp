//#include<stdio.h>
//int main ()
//{
//	//for one customer 
//	// for one product only due to not use of loop
//	int quantity_of_product=1;
//	float price , tax , sub_total , Final_bill , discounted_amount,discount,tax_amount;
//	
//	printf("Quantity of product purchased =%d\n\n",quantity_of_product);
//	printf("Price of product: Rs.");
//	scanf("%f",&price);
//	printf("\n");
//	
//	printf("Enter discount percentage=");
//	scanf("%f",&discount);
//	
//	printf("Enter tax percentage=");
//	scanf("%f",&tax);
//	printf("\n");
//	
//	if (price <= 0 || discount < 0 || discount > 100 || tax < 0 || tax > 100)
//{
//    printf("Invalid input!\n");
//    return 0;
//}
//	
//	
//	sub_total=quantity_of_product*price;
//	printf("Subtotal: %.2f\n",sub_total);
//	
//	discounted_amount=sub_total-(sub_total*discount) / 100;
//	
//	
//	printf("Discounted amount: Rs.%.2f\n",discounted_amount);
//
//	tax_amount=discounted_amount*tax/100; 
//	printf("Tax amount: Rs.%.2f\n",tax_amount);
//	
//	Final_bill = discounted_amount + tax_amount;
//	printf("Final Bill: Rs.%.2f\n", Final_bill);
//	return 0;
//}

//#include <stdio.h>
//
//// Function 1: Calculate Subtotal
//float calculateSubtotal(int quantity, float price) {
//    return quantity * price;
//}
//
//// Function 2: Calculate Discounted Amount
//float calculateDiscountedAmount(float subtotal, float discount) {
//    return subtotal - (subtotal * discount) / 100;
//}
//
//// Function 3: Calculate Final Bill
//float calculateFinalBill(float discountedAmount, float tax) {
//    return discountedAmount + (discountedAmount * tax) / 100;
//}
//
//int main() {
//    int quantity;
//    float price, discount, tax;
//
//    // Input
//    printf("=== Online Shopping Bill Calculator ===\n");
//
//    printf("Enter quantity of products purchased: ");
//    scanf("%d", &quantity);
//
//    printf("Enter price per item: ");
//    scanf("%f", &price);
//
//    printf("Enter discount percentage: ");
//    scanf("%f", &discount);
//
//    printf("Enter tax percentage: ");
//    scanf("%f", &tax);
//
//    // Validation
//    if (quantity <= 0) {
//        printf("\nError: Quantity must be greater than zero.\n");
//        return 1;
//    }
//    if (price <= 0) {
//        printf("\nError: Price per item must be greater than zero.\n");
//        return 1;
//    }
//    if (discount < 0 || discount > 100) {
//        printf("\nError: Discount percentage must be between 0 and 100.\n");
//        return 1;
//    }
//    if (tax < 0 || tax > 100) {
//        printf("\nError: Tax percentage must be between 0 and 100.\n");
//        return 1;
//    }
//
//    // Calculations (each stage depends on the previous)
//    float subtotal = calculateSubtotal(quantity, price);
//    float discountedAmount = calculateDiscountedAmount(subtotal, discount);
//    float finalBill = calculateFinalBill(discountedAmount, tax);
//
//    // Bill Document
//    printf("\n========== FINAL BILL ==========\n");
//    printf("Quantity Purchased   : %d\n", quantity);
//    printf("Price per Item       : %.2f\n", price);
//    printf("Subtotal             : %.2f\n", subtotal);
//    printf("Discount Applied     : %.2f%%\n", discount);
//    printf("Amount after Discount: %.2f\n", discountedAmount);
//    printf("Tax Applied          : %.2f%%\n", tax);
//    printf("-----------------------------------\n");
//    printf("FINAL AMOUNT PAYABLE : %.2f\n", finalBill);
//    printf("===================================\n");
//
//    return 0;
//}

//#include<stdio.h>
//int main ()
//{
//	//for one customer 
//	// for one product only due to not use of loop
//	int quantity_of_product=1;
//	float price , tax , sub_total , Final_bill , discounted_amount,discount,tax_amount;
//	
//	printf("Quantity of product purchased =%d\n\n",quantity_of_product);
//	printf("Price of product: Rs.");
//	scanf("%f",&price);
//	printf("\n");
//	
//	printf("Enter discount percentage=");
//	scanf("%f",&discount);
//	
//	printf("Enter tax percentage=");
//	scanf("%f",&tax);
//	printf("\n");
//	
//	if (price <= 0||discount < 0||discount > 100||tax < 0||tax > 100)
//	{
//	    printf("Invalid input!\n");
//	    return 0;
//	}
//	
//	sub_total=quantity_of_product*price;
//	
//	discounted_amount=sub_total-(sub_total*discount) / 100;
//	
//	tax_amount=discounted_amount*tax/100; 
//	
//	Final_bill = discounted_amount + tax_amount;
//	
//	printf("\tFINAL BILL\t\t\n");
//	printf("Quantity           : %d\n", quantity_of_product);
//	printf("Price of product   : Rs.%.2f\n", price);
//	printf("Subtotal           : Rs.%.2f\n", sub_total);
//	printf("Discount Applied   : %.2f%%\n", discount);
//	printf("Discounted amount  : Rs.%.2f\n", discounted_amount);
//	printf("Tax Applied        : %.2f%%\n", tax);
//	printf("Tax amount         : Rs.%.2f\n", tax_amount);
//	printf("---------------------------------\n");
//	printf("Final amount       : Rs.%.2f\n",Final_bill);
//	
//	return 0;
//}

//#include<stdio.h>
//int main ()
//{
//    int quantity_of_product;
//    float price , tax , sub_total = 0 , Final_bill , discounted_amount, discount, tax_amount;
//
//    printf("Enter quantity of product purchased : ");
//    scanf("%d", &quantity_of_product);
//
//    printf("Price of product: Rs.");
//    scanf("%f",&price);
//    printf("\n");
//
//    printf("Enter discount percentage=");
//    scanf("%f",&discount);
//
//    printf("Enter tax percentage=");
//    scanf("%f",&tax);
//    printf("\n");
//
//    if (quantity_of_product <= 0 || price <= 0 || discount < 0 || discount > 100 || tax < 0 || tax > 100)
//    {
//        printf("Invalid input!\n");
//        return 0;
//    }
//
//    for(int i = 1; i <= quantity_of_product; i++)
//    {
//        sub_total = sub_total + price;
//    }
//
//    discounted_amount = sub_total - (sub_total * discount) / 100;
//
//    tax_amount = discounted_amount * tax / 100;
//
//    Final_bill = discounted_amount + tax_amount;
//
//    printf("\tFINAL BILL\t\n");
//    printf("Quantity           : %d\n", quantity_of_product);
//    printf("Price of product   : Rs.%.2f\n", price);
//    printf("Subtotal           : Rs.%.2f\n", sub_total);
//    printf("Discount Applied   : %.2f%%\n", discount);
//    printf("Discounted amount  : Rs.%.2f\n", discounted_amount);
//    printf("Tax Applied        : %.2f%%\n", tax);
//    printf("Tax amount         : Rs.%.2f\n", tax_amount);
//    printf("---------------------------------\n");
//    printf("Final amount       : Rs.%.2f\n",Final_bill);
//
//    return 0;
//}
#include<stdio.h>
int main ()
{
    int quantity_of_product;
    float price , tax , sub_total , Final_bill , discounted_amount, discount, tax_amount;

    printf("Enter quantity of product purchased : ");
    scanf("%d", &quantity_of_product);

    printf("Price of product: Rs.");
    scanf("%f",&price);
    printf("\n");

    printf("Enter discount percentage=");
    scanf("%f",&discount);

    printf("Enter tax percentage=");
    scanf("%f",&tax);
    printf("\n");

    if (quantity_of_product <= 0 || price <= 0 || discount < 0 || discount > 100 || tax < 0 || tax > 100)
    {
        printf("Invalid input!\n");
        return 0;
    }
    else
    {
    sub_total = quantity_of_product * price;

    discounted_amount = sub_total - (sub_total * discount) / 100;

    tax_amount = discounted_amount * tax / 100;

    Final_bill = discounted_amount + tax_amount;

    printf("\tFINAL BILL\t\n");
    printf("Quantity           : %d\n", quantity_of_product);
    printf("Price of product   : Rs.%.2f\n", price);
    printf("Subtotal           : Rs.%.2f\n", sub_total);
    printf("Discount Applied   : %.2f%%\n", discount);
    printf("Discounted amount  : Rs.%.2f\n", discounted_amount);
    printf("Tax Applied        : %.2f%%\n", tax);
    printf("Tax amount         : Rs.%.2f\n", tax_amount);
    printf("---------------------------------\n");
    printf("Final amount       : Rs.%.2f\n",Final_bill);
}
    return 0;
}
