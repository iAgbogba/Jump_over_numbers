int digit_sum(long long number) {
    int sum{0};
    if (number < 0)
    {
        number *= -1;
    }
    while(number > 0)
    {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}
