#include <stdio.h>
#include <cs50.h>

// Function prototypes
bool check_validity(long long cc_num);
void check_brand(long long cc_num);

int main(void)
{
    // Get credit card number from user
    long long cc_num = get_long("Number: ");


    // Check validity of credit card number
    if (check_validity(cc_num))
    {
        check_brand(cc_num);
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

// Function definitions
bool check_validity(long long cc_num)
{
    // Check if credit card number is valid
    int sum = 0;

    // Loop through every digit of the credit card number
    for (int i = 0; cc_num != 0; i++, cc_num /= 10)
    {
        // Add every other digit starting with the last
        if (i % 2 == 0)
        {
            sum += cc_num % 10;
        }
        else
        {
            int digit = 2 * (cc_num % 10);
            sum += digit / 10 + digit % 10;
        }
    }

    return (sum % 10 == 0);
}

// Check brand of credit card number
void check_brand(long long cc_num)
{
    // Check if credit card number is AMEX, MASTERCARD, or VISA
    if ((cc_num >= 340000000000000 && cc_num < 350000000000000) || (cc_num >= 370000000000000 && cc_num < 380000000000000))
    {
        printf("AMEX\n");
    }
    else if (cc_num >= 5100000000000000 && cc_num < 5600000000000000)
    {
        printf("MASTERCARD\n");
    }
    else if ((cc_num >= 4000000000000 && cc_num < 5000000000000) || (cc_num >= 4000000000000000 && cc_num < 5000000000000000))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
