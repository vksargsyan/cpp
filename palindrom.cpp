#include <iostream>

int absolute(int num)
{
  return (num < 0) ? -num : num;
}

bool isSingleDigit(int num)
{
  return (num >= 0 && num < 10) ? true : false;
}

bool endsWithZero(int num)
{
  return (num % 10 == 0) ? true : false;
}

int reverse(int num)
{

  int tmp = num;
  int res = 0;

  while (true)
  {
    if (isSingleDigit(tmp))
    {
      res = res * 10 + tmp;
      break;
    }
    else
    {
      res = res * 10 + tmp % 10;
      tmp = tmp / 10;
    }
  }

  return res;
}

bool isPalindrom(int num)
{
  int prep = absolute(num);

  if (isSingleDigit(prep))
    return true;

  if (endsWithZero(prep))
    return false;

  int reversed = reverse(prep);

  return reversed == num;
}

int main()
{
  int a = 12321;

  std::cout << isPalindrom(a) << std::endl;

  return 0;
}