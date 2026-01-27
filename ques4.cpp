/*Q4. A shopkeeper wants to calculate the total bill amount after 
applying a 20% discount on the purchase.Implement a solution to accept 
item no., quantity, and unit price. Compute the amount and apply 20% discount.*/
#include <iostream>
using namespace std;

int main() {
    int item, quantity;
    float price, amount, discount, final_amt;

    cin >> item >> quantity>> price;
//input of item(no),qunatity,and their price
    amount = quantity * price;
    discount = amount * 0.20;
    final_amt = amount - discount;
//formula applied for output
    cout << final_amt;

    return 0;
}
