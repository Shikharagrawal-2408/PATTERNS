/*
Problem: Currency Denomination Breakdown
You are given an integer amount of money in rupees. Your task is to determine the minimum number of currency notes and coins needed to make up
the given amount using the following denominations: ₹100 ₹50 ₹20 ₹10 ₹1 (coins)

You need to print the number of notes/coins for each denomination used in descending order, starting from ₹100 down to ₹1.

🔸 Input:
A single integer N representing the total amount of money.
1 ≤ N ≤ 10^6

🔸 Output:
Print how many notes/coins of each denomination are used to make up the total amount.

Print only those denominations that are actually used.

🔸 Example 1:
Input: 280
Output:
2 HUNDREDS
1 FIFTY
1 TWENTY
1 TEN

🔸 Explanation: For 280, the breakdown is:
2 × ₹100 = ₹200
1 × ₹50 = ₹50
1 × ₹20 = ₹20
1 × ₹10 = ₹10
Total = ₹280

🔸 Example 2:
Input: 69
Output:
1 FIFTY
0 TWENTY
1 TEN
9 coins.

🔸 Constraints:
Use only the denominations: ₹100, ₹50, ₹20, ₹10, ₹1
Try to use the fewest number of total notes/coins

✅ Task:
Implement a function void breakdown(int amount) that prints the denominations used to form the amount.
*/
/*
This program takes an integer input amount and breaks it down into the minimum number of currency notes and coins using denominations of 100, 
50, 20, 10, and remaining coins (assumed to be of ₹1). The function div(int a) is responsible for this breakdown. It uses a loop to keep 
reducing the amount by successively subtracting the largest possible denominations. For example, if the amount is more than or equal to 100, 
it calculates how many 100 rupee notes are needed and reduces the amount accordingly (a %= 100). It then does the same for 50, 20, and 10 rupee
notes, in that order. Any remaining amount less than 10 is treated as coins and displayed as such.

In main(), the program prompts the user to enter the amount of money, which is passed to the div function. The output consists of the count of 
each denomination required to make up the total amount with minimal notes and coins. This is a classic example of a greedy algorithm used for 
the currency denomination problem.
*/
#include <iostream>
using namespace std;

void div(int a)
{
    while(a!=0)
    {
        if(a>100)
        {cout<<a/100<<" HUNDREADS"<<endl;

        a%=100;
        }
        else if(a>=50)
       { cout<<a/50<<" FIFTY"<<endl;

        a%=50;
       }
        else if(a>=20)
        {cout<<a/20<<" TWENTY"<<endl;

        a%=20;
        }
        else if(a>=10)
      {  cout<<a/10<<" TEN"<<endl;

        a%=10;
      }
        else
       { cout<<a<<" coins.\n";

        a%=1;
       }
    }
}

int main()
{
    int n;
    cout<<"Enter the amount of money:- ";
    cin>>n;
    cout<<endl;

    div(n);
}