#include <iostream>
#include <vector>

bool isLuckyNumber(int num)
{
    std::vector<int> digits;
    while (num > 0)
    {
        digits.push_back(num % 10);
        num /= 10;
    }
    int n = digits.size();
    if (n % 2 != 0)
    {
        return false; // 数字位数为奇数，跳过
    }
    int mid = n / 2;
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < mid; ++i)
    {
        leftSum += digits[i];
        rightSum += digits[mid + i];
    }
    return leftSum == rightSum;
}

int countLuckyNumbers(int limit)
{
    int count = 0;
    for (int num = 1; num <= limit; ++num)
    {
        if (isLuckyNumber(num))
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    int limit = 100000000;
    int result = countLuckyNumbers(limit);
    std::cout << "从1到" << limit << "之间共有 " << result << " 个幸运数字。" << std::endl;
    return 0;
}
