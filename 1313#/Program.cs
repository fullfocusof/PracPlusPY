using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1313_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int size = int.Parse(Console.ReadLine());

            int[,] matrix = new int[size, size];

            for (int i = 0; i < size; i++)
            {
                string temp = Console.ReadLine();
                string[] nums = temp.Split(' ');

                for (int j = 0; j < size; j++)
                {
                    matrix[i, j] = int.Parse(nums[j]);
                }
            }

            for (int k = 0; k < size; ++k)
            {
                for (int i = 0; i <= k; ++i)
                {
                    Console.Write(matrix[k - i, i] + " ");
                }
            }

            for (int k = 1; k < size; ++k)
            {
                for (int i = 0; i < size - k; ++i)
                {
                    Console.Write(matrix[size - 1 - i, k + i] + " ");
                }
            }
        }
    }
}
