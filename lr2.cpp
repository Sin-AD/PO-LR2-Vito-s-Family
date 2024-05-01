using System;

public class FamilyVito
{
public static void Main()
{
int t = int.Parse(Console.ReadLine()); // количество тестовых блоков

for (int i = 0; i < t; i++)
{
string[] input = Console.ReadLine().Split(); // читаем входные данные
int r = int.Parse(input[0]); // количество родственников
int[] s = new int[r]; // массив номеров домов, где живут родственники

for (int j = 0; j < r; j++)
{
s[j] = int.Parse(input[j + 1]);
}

int minDist = int.MaxValue; // минимальная сумма расстояний

for (int j = 0; j < r; j++)
{
int dist = 0;

for (int k = 0; k < r; k++)
{
dist += Math.Abs(s[j] - s[k]);
}

if (dist < minDist)
{
minDist = dist;
}
}

Console.WriteLine(minDist); // выводим результат
}
}
}
