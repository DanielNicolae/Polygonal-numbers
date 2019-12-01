/*
Finding the first 100 polygonal numbers with sides between 3 and 10000


~~Documentation~~
https://en.wikipedia.org/wiki/Polygonal_number

~~Links~~
GitHub: https://github.com/DanielNicolae
Google Play: https://play.google.com/store/apps/developer?id=Don%C8%9Bu+Daniel+Nicolae
YouTube: https://www.youtube.com/channel/UCdxZEh4oSEsxDRc8MsTawjw?view_as=subscriber
GrabCad: https://grabcad.com/don.u.daniel.nicolae-1
WordPress: https://daniel25site.wordpress.com/
DeviantArt: http://free-gamer4ever.deviantart.com/

~~Author~~
Donțu Daniel Nicolae 2019
*/

using System;

namespace Polygonal_numbers
{
    class Program
    {
        static void Main(string[] args)
        {
            int polygonOfSides;
            Console.WriteLine("Enter a number between 3 and 24 to calculate the first 100 polygonal numbers that have between 3 and 24 sides.");
            Console.WriteLine("For polygonal numbers with sides greater than 24, please enter the number 25.");
            
            polygonOfSides = Convert.ToInt32(Console.ReadLine());
             
            
            switch (polygonOfSides)
            {
                case 3:
                    Console.WriteLine("The triangular numbers between 1 and 100:");
                    foreach(int n in Triangular_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;

                case 4:
                    Console.WriteLine("The square numbers between 1 and 100:");
                    foreach (int n in Square_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;

                case 5:
                    Console.WriteLine("The pentagonal numbers between 1 and 100:");
                    foreach (int n in Pentagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 6:
                    Console.WriteLine("The hexagonal numbers between 1 and 100:");
                    foreach (int n in Hexagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 7:
                    Console.WriteLine("The heptagonal numbers between 1 and 100:");
                    foreach (int n in Heptagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 8:
                    Console.WriteLine("The octagonal numbers between 1 and 100:");
                    foreach (int n in Octagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 9:
                    Console.WriteLine("The nonagonal numbers between 1 and 100:");
                    foreach (int n in Nonagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 10:
                    Console.WriteLine("The decagonal numbers between 1 and 100:");
                    foreach (int n in Decagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 11:
                    Console.WriteLine("The hendecagonal numbers between 1 and 100:");
                    foreach (int n in Hendecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 12:
                    Console.WriteLine("The dodecagonal numbers between 1 and 100:");
                    foreach (int n in Dodecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 13:
                    Console.WriteLine("The tridecagonal numbers between 1 and 100:");
                    foreach (int n in Tridecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 14:
                    Console.WriteLine("The tetradecagonal numbers between 1 and 100:");
                    foreach (int n in Tetradecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 15:
                    Console.WriteLine("The pentadecagonal numbers between 1 and 100:");
                    foreach (int n in Pentadecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 16:
                    Console.WriteLine("The hexadecagonal numbers between 1 and 100:");
                    foreach (int n in Hexadecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 17:
                    Console.WriteLine("The heptadecagonal numbers between 1 and 100:");
                    foreach (int n in Heptadecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 18:
                    Console.WriteLine("The octadecagonal numbers between 1 and 100:");
                    foreach (int n in Octadecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 19:
                    Console.WriteLine("The enneadecagonal numbers between 1 and 100:");
                    foreach (int n in Enneadecagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 20:
                    Console.WriteLine("The icosagonal numbers between 1 and 100:");
                    foreach (int n in Icosagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 21:
                    Console.WriteLine("The icosihenagonal numbers between 1 and 100:");
                    foreach (int n in Icosihenagonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 22:
                    Console.WriteLine("The icosidigonal numbers between 1 and 100:");
                    foreach (int n in Icosidigonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 23:
                    Console.WriteLine("The icositrigonal numbers between 1 and 100:");
                    foreach (int n in Icositrigonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 24:
                    Console.WriteLine("The icositetragonal numbers between 1 and 100:");
                    foreach (int n in Icositetragonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                case 25:
                    
                    foreach (int n in Polygonal_numbers())
                    {
                        Console.WriteLine(n);
                    }
                    break;
                default:
                    Console.WriteLine("You must choose a number between 3 and 25.");
                    break;
                    
            }
            
        }
        static int[] Triangular_numbers()
        {
           int[] nums=new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (n * n + n) / 2;
                nums[n] = number;
            }
            return nums; 
        }
        static int[] Square_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = n*n;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Pentagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (3 * n * n - n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Hexagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (4 * n * n - 2 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Heptagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (5 * n * n - 3 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Octagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (6 * n * n - 4 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Nonagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (7 * n * n - 5 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Decagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (8 * n * n - 6 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Hendecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (9 * n * n - 7 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Dodecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (10 * n * n - 8 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Tridecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (11 * n * n - 9 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Tetradecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (12 * n * n - 10 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Pentadecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (13 * n * n - 11 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Hexadecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (14 * n * n - 12 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Heptadecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (15 * n * n - 13 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Octadecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (16 * n * n - 14 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Enneadecagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (17 * n * n - 15 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Icosagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (18 * n * n - 16 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Icosihenagonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (19 * n * n - 17 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Icosidigonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (20 * n * n - 18 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Icositrigonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (21 * n * n - 19 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }
        static int[] Icositetragonal_numbers()
        {
            int[] nums = new int[101];
            for (int n = 1; n <= 100; n++)
            {
                int number = (22 * n * n - 20 * n) / 2;
                nums[n] = number;
            }
            return nums;
        }

        static int[] Polygonal_numbers()
        {
            int[] nums = new int[101];
            Console.WriteLine("Choose the number of sides for the polygon (between 4 and 10000).");
            int sides= Convert.ToInt32(Console.ReadLine());
            if (sides<3 || sides>10000)
            {
                Console.WriteLine("Insert a number between 4 and 10000.");
                sides = Convert.ToInt32(Console.ReadLine());
            }
            Console.WriteLine("The first 100 polygonal numbers with {0} sides are:",sides);
            for (int n = 1; n <= 100; n++)
            {
                int number = ((sides-2)* n * n - (sides-4) * n) / 2;
                nums[n] = number;
            }
            return nums;

        }
    }
}
