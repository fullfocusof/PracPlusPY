using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1068
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int limit = int.Parse(Console.ReadLine()), result = 0;

            if (limit <= 0)
            {
                for (int i = limit; i <= 1; i++)
                {
                    result += i;
                }
            }
            else if (limit > 0)
            {
                for (int i = 1; i <= limit; i++)
                {
                    result += i;
                }
            }

            Console.WriteLine(result);
        }
    }
}
