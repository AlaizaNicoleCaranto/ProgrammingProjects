using System;
using System.Linq;

namespace ATMSimulation;

public static class Program
{
    public static void Main()
    {
        int pin = 1234;//Default Pin
        int accountBal = 1000; // Default Account Balance
        int attempts = 0; // Reset Attempts

        Console.WriteLine("\n\t=============================================");
        Console.WriteLine(" ||           Welcome To Simple ATM         ||");
        Console.WriteLine("\t=============================================");
        Console.WriteLine(" \n   《  Please Follow The Instructions Below. 》");



        //Loop Until Correct Pin Is Entered
        while (true)
        {
            Console.Write("\n\tENTER YOUR PIN:\t ");
            int enteredPin = Convert.ToInt32(Console.ReadLine());
            attempts++;

            if (enteredPin == pin)
            {
                Console.WriteLine("\n\t[PIN ACCEPTED.WELCOME CLIENT!]\n");
                break;//To Stop The Loop 
            }
            else
            {
                Console.WriteLine("\n\t[INCORRECT PIN. TRY AGAIN.]\n");
            }
            if (attempts >= 3)
            {
                Console.Clear();
                Console.WriteLine("\n\t[TOO MANY INCORRECT ATTEMPTS. EXITING.]\n");
                return;

            }
        }
        while (true)
        {

            Console.WriteLine("\t=============================================");
            Console.WriteLine("\t==============   MAIN MENU   ================");
            Console.WriteLine("\t=============================================");
            Console.WriteLine("\n\t1.CHECK BALANCE");
            Console.WriteLine("\t2. WITHDRAW MONEY");
            Console.WriteLine("\t3. EXIT");
            Console.Write("\tCHOOSE AN OPTION(1-3): ");

            int choice = Convert.ToInt32(Console.ReadLine());

            if (choice == 1)
            {
                Console.WriteLine("\n\t============   BALANCE CHECK  ===============");
                Console.WriteLine("\n          YOUR CURRENT BALANCE IS:" + accountBal + "\n");
            }
            else if (choice == 2)
            {
                Console.WriteLine("\n\t============   WITHDRAW MONEY  ===============");
                Console.Write("\n          ENTER AMOUNT TO WITHDRAW: ");
                int withdraw = Convert.ToInt32(Console.ReadLine());

                if (withdraw <= accountBal)
                {
                    accountBal -= withdraw;
                    Console.WriteLine("\n            TRANSACTION SUCCESSFUL!\n             REMAINING BALANCE: " + accountBal + "\n");
                }
                else
                {
                    Console.WriteLine("\n       OVERDRAWN ACCOUNT. TRANSACTION DENIED.\n");
                }

            }
            else if (choice == 3)
            {
                Console.WriteLine("\n\t=============================================");
                Console.WriteLine("\t《 THANK YOU FOR USING SIMPLE ATM! GOOD DAY! 》");
                Console.WriteLine("\t=============================================");
                break;


            }
            else
            {
                Console.WriteLine("\n\t《 INVALID OPTION. PLEASE CHOOSE 1, 2 , OR 3 》\n");
            }

        }

    }
}