using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1243_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string value = Console.ReadLine();
            int remainder = 0;

            foreach (char digit in value)
            {
                int curDigit = digit - '0';
                int curNum = remainder * 10 + curDigit;
                int quotient = curNum / 7;
                remainder = curNum % 7;
            }

            Console.WriteLine(remainder);
        }
    }
}
