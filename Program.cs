﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Globalization;
using System.Threading;

namespace Ex_2v8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Укажите язык вывода:");

            string language = Console.ReadLine();
            Console.WriteLine("\n");

            for (int i = 1; i <= 12; i++)
            {
                DateTime dt = new DateTime(1, i, 1);
                Thread.CurrentThread.CurrentCulture = new CultureInfo(language);
                Console.WriteLine(dt.ToString("MMMM"));
            }    
        }
    }
}