using System;
using System.Linq;

namespace OperatorChallenge;

public static class Program
{
    public static void Main()
    {
        Console.WriteLine("\t*********************************************");
        Console.WriteLine(" \t**********    OPERATOR CHALLENGE    ********* ");
        Console.WriteLine("\t*********************************************");


        //Prompt The User For Two Integers
        Console.Write("\n\tInput First Integer:");
        int num1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("\tInput Second Integer:");
        int num2 = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("\n\t=============================================");
        Console.WriteLine("  \t《           ARITHMETIC OPERATION           》 ");
        Console.WriteLine("\t=============================================");

        //Operations
        int sum = num1 + num2;
        int difference = num1 - num2;
        int product = num1 * num2;
        int quotient = num1 / num2;
        int remainder = num1 % num2;

        Console.WriteLine("\n\t《ADDITION》\n" + "\t" + num1 + " + " + num2 + " = " + sum + "\n");
        Console.WriteLine("\t《SUBTRACTION》\n" + "\t" + num1 + " - " + num2 + " = " + difference + "\n");
        Console.WriteLine("\t《MULTIPLICATION》\n" + "\t" + num1 + " * " + num2 + " = " + product + "\n");
        Console.WriteLine("\t《DIVISION》\n" + "\t" + num1 + " / " + num2 + " = " + quotient + " r" + remainder);

        Console.WriteLine("\n\t=============================================");
        Console.WriteLine(" \t《            RELATIONAL COMPARISONS         》 ");
        Console.WriteLine("\t=============================================");

        //Comparing 2 Integers Using Relational Operators
        if (num1 > num2)
        {
            Console.WriteLine("\n\t" + num1 + "is greater than" + num2);
        }
        else if (num1 < num2)
        {
            Console.WriteLine("\n\t" + num1 + " is less than " + num2);
        }
        else
        {
            Console.WriteLine("\n\t    Both Integers Are Equal");
        }

        Console.WriteLine("\n\t=============================================");
        Console.WriteLine(" \t《                 LOGICAL CHECK             》 ");
        Console.WriteLine("\t=============================================");

        //Whether Both Integers Are Positive
        if (num1 > 0 && num2 > 0)
        {
            Console.WriteLine("\n\t Both Integers Are Positive\n");
        }
        else
        {
            Console.WriteLine("\n\t  One or Both of the Integers is Not Positive\n");
        }

        Console.WriteLine("\t*********************************************");
        Console.WriteLine("\t**************   END OF PROGRAM  ************");
        Console.WriteLine("\t*********************************************");

    }
}
